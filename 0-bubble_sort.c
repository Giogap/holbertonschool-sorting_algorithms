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
}
