int linear_search(int *array, size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == value)
            return i;
    }
    return -1;
}
