#include "sort.h"

/**
 * bubble_sort - function that sorts in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: this function doesn't return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	int ssize = 0;
	int i = 0, j = 0, key = 0;

	head = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return;
	}

	listint_t *temp = head;

	while ((*list) != NULL)
	{
		ssize++;
		(*list) = (*list)->next;
	}
	for(i = 1; i < ssize; i++)
	{
		temp = head->next;
		j = i - i;

	}
}
