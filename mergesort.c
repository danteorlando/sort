/*
 * mergesort.c
 *
 *  Created on: Sep 5, 2016
 *      Author: dante
 */

#include <stdio.h>

void mergesort(int a[], int low, int high);
void merge(int a[], int low, int middle, int high);

void mergesort(int a[], int low, int high)
{
	int middle; /* index of middle element */
	if (low < high) {

		//middle = (low+high)/2;

		// Same as (low+high)/2, but avoids overflow for
		// large low and high
		middle = low+(high-low)/2;


		mergesort(a,low,middle);
		mergesort(a,middle+1,high);

		merge(a, low, middle, high);
	}
}

void merge(int a[], int low, int middle, int high)
{
	int i, j, k;
	int n1 = middle - low + 1;
	int n2 =  high - middle;

	/* create temp arrays */
	int LOW[n1], HIGH[n2];

	/* Copy data to temp arrays LOW[] and HIGH[] */
	for (i = 0; i < n1; i++)
		LOW[i] = a[low + i];
	for (j = 0; j < n2; j++)
		HIGH[j] = a[middle + 1 + j];

	/* Merge the temp arrays back into a[low..high] */
	i = 0; 		// Initial index of first subarray
	j = 0; 		// Initial index of second subarray
	k = low; 	// Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (LOW[i] <= HIGH[j])
		{
			a[k] = LOW[i];
			i++;
		}
		else
		{
			a[k] = HIGH[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there are any */
	while (i < n1)
	{
		a[k] = LOW[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there are any */
	while (j < n2)
	{
		a[k] = HIGH[j];
		j++;
		k++;
	}
}
