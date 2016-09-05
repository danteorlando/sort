/*
 * quicksort.c
 *
 *  Created on: Sep 1, 2016
 *      Author: dante
 */

#include <stdio.h>

void quicksort(int a[], int l, int h);
int partition(int a[], int l, int h);
void swap(int *x, int *y);


int main()
{
	int a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9};

	int i;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);

	quicksort( a, 0, 8);

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", a[i]);

	return 0;
}


void quicksort(int  a[], int l, int h)
{
	int p; /* index of partition */
	if ((h-l)>0) {
		p = partition(a,l,h);
		quicksort(a,l,p-1);
		quicksort(a,p+1,h);
	}
}


int partition(int a[], int l, int h)
{
	int i; /* counter */
	int p; /* pivot element index */
	int firsthigh; /* divider position for pivot element */
	p = h;
	firsthigh = l;
	for (i=l; i<h; i++)
		if (a[i] < a[p]) {
			swap(&a[i],&a[firsthigh]);
			firsthigh ++;
		}
	swap(&a[p],&a[firsthigh]);
	return(firsthigh);
}

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
