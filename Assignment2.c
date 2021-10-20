//luke hoskam
//ECE361
//Assignment 2
//Dr. Kravits
//
//
//This program will allow a user to input a 5x5 array of integers
//and tabulate the rows and the columns
//


#include <stdio.h>
#include <stdlib.h>
#define NUM_COLS 5
#define NUM_ROWS 5

int rowTally(int matrix[NUM_ROWS][NUM_COLS], int rowNum);
int colTally(int matrix[NUM_ROWS][NUM_COLS], int ColNum);


int main(void)
{
    int ch;
    int myMatrix[NUM_ROWS][NUM_COLS];
    int rowTotals[NUM_ROWS];
    int colTotals[NUM_COLS];

    printf("The program will only accept the first five values \n");
    for(int i = 0; i < NUM_ROWS;i++)
    {
        printf("Enter 5 values for row %d:", (i+1));
        for(int j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &myMatrix[i][j]);
            
        }
        while ((ch = getchar()) != '\n');
    }
    printf("the input matrix is: \n");
    for(int i = 0; i < NUM_ROWS;i++)
    {
        //printf("Values for row %d: ", (i+1));
        for(int j = 0; j < NUM_COLS; j++)
        {
            printf("%d  ", myMatrix[i][j]);
        }
        printf("\n");
    }

    for(int i =0; i < NUM_ROWS; i++)
    {
        rowTotals[i] = rowTally(myMatrix,i);
    }

    for(int i = 0; i< NUM_ROWS; i++)
    {
        printf("Row %d total: %d \n", (i+1),rowTotals[i]);
    }

    for(int i =0; i < NUM_COLS; i++)
    {
        colTotals[i] = colTally(myMatrix,i);
    }

    for(int i = 0; i< NUM_COLS; i++)
    {
        printf("column %d total: %d \n", (i+1),colTotals[i]);
    }

    return 0;
}

int rowTally(int matrix[NUM_ROWS][NUM_COLS], int rowNum)
{
    int total = 0;
    for(int i = 0; i < NUM_COLS; i ++)
    {
        total += matrix[rowNum][i];
    }
    return total;
}

int colTally(int matrix[NUM_ROWS][NUM_COLS], int colNum)
{
    int total = 0;
    for(int i = 0; i < NUM_ROWS; i ++)
    {
        total += matrix[i][colNum];
    }
    return total;
}