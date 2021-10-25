include "sort.h"

/**
 * insertion_sort_list - function that sorts in ascending order
 * @list: the array to be sorted
 * Return: this function doesn't return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (!list)
		return;
	if ((*list)->next == NULL)
		return;
	while (list)
	{
		curr = *list;
		if (curr->prev != NULL && curr->n < curr->prev->n)
		{
			curr->prev->next = curr->next;
			curr->next = curr->next->prev;
		}
		while(curr->prev != NULL)
		if (curr->prev < curr)
		{

		}
	}
}