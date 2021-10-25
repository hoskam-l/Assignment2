/**
 * test_maximum.c - Source code for test program for the maximum() from HW #2, prob 2.
 *
 * Author:  Roy Kravitz (roy.kravitz@pdx.edu)
 * Date:    16-Oct-2021
 *
 * This is source code for a test program for the maximum() function created by the students
 * in ECE 361f21 Homework #2 problem 2. The program queries the user for floating point numbers to put into the test array and
 * displays a the original list and the maximum floating point number. 
 *
 * Original problem/solution based on a problem in Computer Systems: 5e by Stanley Warford
 *
 * @note:  please submit your modified source code if you make any changes to this test program
 */

//This progam was authored by the above except for the function "float maximum(float list[], int n)"
//which was authored by luke hoskam
//luke hoskam
//ECE326
//Dr. Kravitz
//Assignment 2 Problem 2B


#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>

// function prototypes
float maximum(float list[], int n);

int main() {
	float vector[32];	// array holding the list elements
	int numItems;		// number of items
	int i;		        // loop index
	
	
	printf("Find the maximum number in an array of numbers\n\n");
	
	printf("Enter the number of items in the list: ");
	scanf("%d", &numItems);
	printf("Enter the items as a floating point number: ");
	for (i = 0; i < numItems; i++) {
		scanf("%f", &vector[i]);
	}
	printf("Original list: ");
	for (i = 0; i < numItems; i++) {
		printf("%4.2f ", vector[i]);
	}
	printf("\n");
	printf("Largest value: %4.2f\n", maximum(vector, numItems - 1));
	return 0;
}


