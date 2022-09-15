#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, i;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		i = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[i])
			{
				i = y;
			}
			if (x != i)
			{
				tmp = array[x];
				array[x] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
