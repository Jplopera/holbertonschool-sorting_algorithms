#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int i;

	if (array == NULL || size == 0)
		return;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				i = array[y];
				array[y] = array[y + 1];
				array[y + 1] = i;
				print_array(array, size);
			}
		}
	}
}
