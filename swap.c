#include <stdio.h>

/**
 * _swap - swap two values from an array
 * @list: list to do a swap
 * @valone: first value to swap
 * @valtwo: second value to swap
 * Return: a list
 */

int *_swap(int *list, int valone, int valtwo)
{
	int tmp = list[valone];

	list[valone] = list[valtwo];
	list[valtwo] = tmp;

	return (list);
}
