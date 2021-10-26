#include <stdio.h>

/**
 * _swap - swap two values from an array
 * @value1: first value to swap
 * @value2: second value to swap
 * @list: list to do a swap
 * Return: a list
 */

int *_swap(int *list, int value1, int value2)
{
	int tmp = list[value1];

	list[value1] = list[value2];
	list[value2] = tmp;

	return (list);
}
