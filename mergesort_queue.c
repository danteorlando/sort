/*
/*
 * mergesort.c
 *
 *  Created on: Sep 5, 2016
 *      Author: dante
 */

//#include <stdio.h>
//#include <stlib.h>


/*
void mergesort(int a[], int low, int high)
{
	int i; // counter
	int middle; // index of middle element
	if (low < high) {
		middle = (low+high)/2;
		mergesort(a,low,middle);
		mergesort(a,middle+1,high);
		merge(a, low, middle, high);
	}
}
*/

/*
merge(int a[], int low, int middle, int high)
{
	int i; // counter
	queue buffer1, buffer2; // buffers to hold elements for merging
	init_queue(&buffer1);
	init_queue(&buffer2);
	for (i=low; i<=middle; i++)
		enqueue(&buffer1,a[i]);
	for (i=middle+1; i<=high; i++)
		enqueue(&buffer2,a[i]);
	i = low;
	while (!(empty_queue(&buffer1) || empty_queue(&buffer2))) {
		if (headq(&buffer1) <= headq(&buffer2))
			s[i++] = dequeue(&buffer1);
		else
			s[i++] = dequeue(&buffer2);
	}
	while (!empty_queue(&buffer1))
		s[i++] = dequeue(&buffer1);
	while (!empty_queue(&buffer2))
		s[i++] = dequeue(&buffer2);
}
*/

