#include "sort.h"
#include <time.h>

/**
 *
 *
 *
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 *
 *
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size == 0)
		return;

	for (i = 0; i < size - 1; i++)			/* n  */
	{
		for (j = 0; j < size - i - 1; j++)	/* n^2 */
		{
			if (array[j] > array[j + 1])	/* n^2 */
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
