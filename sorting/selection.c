#include "selection.h"

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

void selection_sort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;

        }
        if (i != min_index)
        {
            swap(&array[i], &array[min_index]);
        }
    }
}
