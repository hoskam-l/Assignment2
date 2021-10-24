//luke hoskam
//ECE361
//Assignment 2
//Dr. Kravits
//
//Problem 1(a)
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
    // declare variables
    int myMatrix[NUM_ROWS][NUM_COLS];
    int rowTotals[NUM_ROWS];
    int colTotals[NUM_COLS];
    // tell user any values after the first 5 values will be used
    // any value entered more than 5 before <enter> will be discarded
    printf("The program will only accept the first five values \n");
    // request input 5 times for 5 values
    for(int i = 0; i < NUM_ROWS;i++)
    {
        // declare local variable to store clear buffer
        int ch;
        printf("Enter 5 values for row %d:", (i+1));
        // accept 5 values for each row
        for(int j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &myMatrix[i][j]);
        }
        // clear buffer so the extra entries aren't put on the next row
        while ((ch = getchar()) != '\n');
    }

    //print the matrix values
    printf("the input matrix is: \n");
    for(int i = 0; i < NUM_ROWS;i++)
    {
        for(int j = 0; j < NUM_COLS; j++)
        {
            printf("%d  ", myMatrix[i][j]);
        }
        printf("\n");
    }
    // tally the values for the rows
    for(int i =0; i < NUM_ROWS; i++)
    {
        rowTotals[i] = rowTally(myMatrix,i);
    }
    // print the values for the rows
    for(int i = 0; i< NUM_ROWS; i++)
    {
        printf("Row %d total: %d \n", (i+1),rowTotals[i]);
    }
    // tally the values for the columns
    for(int i =0; i < NUM_COLS; i++)
    {
        colTotals[i] = colTally(myMatrix,i);
    }
    // print the values for the columns
    for(int i = 0; i< NUM_COLS; i++)
    {
        printf("column %d total: %d \n", (i+1),colTotals[i]);
    }

    return 0;
}
// function to tally each row
// return row total
int rowTally(int matrix[NUM_ROWS][NUM_COLS], int rowNum)
{
    int total = 0;
    for(int i = 0; i < NUM_COLS; i ++)
    {
        total += matrix[rowNum][i];
    }
    return total;
}
// function to tally each column
// return row total
int colTally(int matrix[NUM_ROWS][NUM_COLS], int colNum)
{
    int total = 0;
    for(int i = 0; i < NUM_ROWS; i ++)
    {
        total += matrix[i][colNum];
    }
    return total;
}