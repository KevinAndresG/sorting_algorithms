#include "sort.h"
/**
 * bubble_sort - function that sorts in ascending order
 * @array: the arraytosort to be sorted
 * @size: the size of the arraytosort
 * Return: this function doesn't return
 */
void bubble_sort(int *array, size_t size)
{
	size_t l = 0, k = 0;
	int swap = 0;
	size_t ssizze = size;
	int *arraytosort = array;
	int flag = 0;

	for (l = 0; l < ssizze - 1; l++)
	{
		flag = 0;
		for (k = 0; k < (ssizze - 1 - l); k++)
		{
			if (arraytosort[k] > arraytosort[k + 1])
			{
				swap = arraytosort[k];
				arraytosort[k] = arraytosort[k + 1];
				arraytosort[k + 1] = swap;
				flag++;
				print_array(arraytosort, ssizze);
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
