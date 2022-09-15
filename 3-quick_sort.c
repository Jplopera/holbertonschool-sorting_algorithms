#include "sort.h"
/**
 * quicksort - sorts a partition of an array of integers
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	quick_helper(array, 0, (int)size - 1, size);
}

/**
 * quick_helper - helper function
 * @array: array to be sorted
 * @l: left counter position
 * @r: right counter position
 * @size: size of the array
 */
void quick_helper(int *array, int l, int r, size_t size)
{
	int pos;

	if (l < r)
	{
		pos = separater(array, l, r, size);
		quick_helper(array, l, pos - 1, size);
		quick_helper(array, pos + 1, r, size);
	}
}

/**
 * separater - show the index of the pos
 * @array: array to be sorted
 * @l: left counter position
 * @r: right counter position
 * @size: size of the array
 *
 * Return: the index of the pos int
 */

int separater(int *array, int l, int r, size_t size)
{
	int x, y, tmp;

	x = l - 1;

	for (y = l; y < r; y++)
	{
		if (array[y] < array[r])
		{
			x++;
			if (x != y)
			{
				tmp = array[x];
				array[x] = array[y];
				array[y] = tmp;
				print_array(array, size);
			}
		}
	}

	if (array[r] < array[x + 1])
	{
		tmp = array[x + 1];
		array[x + 1] = array[r];
		array[r] = tmp;
		print_array(array, size);
	}
	return (x + 1);
}
