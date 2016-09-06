/*
 * main.c
 *
 *  Created on: Sep 5, 2016
 *      Author: dante
 */

#include <stdio.h>

void quicksort(int a[], int l, int h);
void mergesort(int a[], int low, int high);

int main()
{
	int i;
	int a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9};

	printf("\n\nQuick Sort  ");
	printf("\nUnsorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);

	quicksort( a, 0, 8);

	printf("\nSorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);

	int b[] = {12, 11, 13, 5, 6, 7};

	printf("\n\nMerge Sort  ");
	printf("\nUnsorted array is:  ");
	for(i = 0; i < 6; ++i)
		printf(" %d ", b[i]);

	mergesort(b, 0, 5);

	printf("\nSorted array is:  ");
	for(i = 0; i < 6; ++i)
		printf(" %d ", b[i]);

	return 0;
}

