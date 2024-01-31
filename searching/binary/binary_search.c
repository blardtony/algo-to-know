int binary_search(const int vec[], int size, int elt)
{
    int left = 0;
    int right = size;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (vec[middle] == elt)
        {
            return middle;
        }

        if (vec[middle] < elt)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}
