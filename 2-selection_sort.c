#include "sort.h"

/**
 * selection_sort - function that do selection sort
 * @array: the array to be sorted
 * @size: size of the array
 * Return: this function doesn't return
 */

void selection_sort(int *array, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    int *list = array;
    int *listord[size];

    if (!list)
    {
        return;
    }
    for (i = 0; i < size - 1; i++)
    {
        size_t numless = i;

        for (j = i + 1; j < size; j++)
        {
            if (list[j] < list[numless])
            {
                numless = j;
            }
        }
        if (numless != i)
        {
            listord = _swap(*list, i, j);
            print_list(*listord);
        }
    }
}