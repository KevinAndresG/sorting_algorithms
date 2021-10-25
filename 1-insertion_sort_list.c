#include "sort.h"

/**
 * insertion_sort_list - function that sorts in ascending order
 * @list: the array to be sorted
 * Return: this function doesn't return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *tmp2;

	if (!list)
		return;
	if ((*list)->next == NULL)
		return;
	tmp = (*list)->next;
	while (list)
	{
		curr = *list;
		if (curr->next != NULL && curr->prev->n > curr->n)
		{
			curr->next = tmp->next;
			tmp->prev = curr->prev;
			tmp->next = curr;
			curr->prev = tmp;
			if (tmp->n < tmp->prev->n)
			{
				while (tmp->prev)
				{
					tmp2 = tmp->prev;
					if (tmp->n > tmp2->n)
					{
						tmp2->next = tmp->next;
						tmp->prev = tmp2->prev;
						tmp2->prev = tmp;
						tmp->next = tmp2;
					}
					tmp = tmp->prev;
				}
			}
		}
		*list = (*list)->next;
		print_list(*list);
	}
}
