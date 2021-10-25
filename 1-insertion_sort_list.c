#include "sort.h"

/**
 * bubble_sort - function that sorts in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: this function doesn't return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *tmp2;

	while (*list)
	{
		curr = *list;
		/* tmp = list->n = list->next; */
		tmp = (*list)->next;
		if (curr->n > tmp->n)
		{
			/* temp2 = curr; */
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
