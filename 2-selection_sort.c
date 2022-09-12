#include "sort.h"

/**
 * selection_sort - check code
 * @array: pointer array
 * @size: size to array
 */

void selection_sort(int *array, size_t size)
{
	size_t indiceMenor, i, j;

	if (size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		indiceMenor = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[indiceMenor])
			{
				indiceMenor = j;
			}
		}
		if (i != indiceMenor)
		{
			double aux = array[i];

			array[i] = array[indiceMenor];
			array[indiceMenor] = aux;
			print_array(array, size);
		}
	}
}
