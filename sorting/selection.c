#include "selection.h"
#include <stdio.h>

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

int main()
{
    int array[] = { 1, 5, 2, 4, 3 };
    selection_sort(array, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
