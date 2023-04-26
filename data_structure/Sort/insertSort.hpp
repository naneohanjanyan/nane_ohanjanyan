#ifndef INSERTSORT_H
#define INSERTSORT_H

int *InsertSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    return arr;
}

#endif