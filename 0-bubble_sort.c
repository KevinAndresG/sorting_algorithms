#include "sort.h"
/**
 * bubble_sort - function that sorts in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: this function doesn't return
 */
void bubble_sort(int *array, size_t size)
{
	size_t l = 0, k = 0;
	int swap = 0;
	int flag = 0;

	if(!array)
	{
		return;
	}

	for (l = 0; l < size - 1; l++)
	{
		flag = 0;
		for (k = 0; k < (size - 1 - l); k++)
		{
			if (array[k] > array[k + 1])
			{
				swap = array[k];
				array[k] = array[k + 1];
				array[k + 1] = swap;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
