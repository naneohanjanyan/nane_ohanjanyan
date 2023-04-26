#include "bubbleSort.hpp"
#include "insertSort.hpp"
#include "merge.hpp"
#include "print.hpp"
#include "quick.hpp"

int main()
{
    const int size = 5;
    int arr[size] = {4, 7, 1, 8, 9};

    auto bubble = BubbleSort(arr, size);

    cout << "Bubble sorting: ";
    Print(bubble, size);

    auto insert = InsertSort(arr, size);

    cout << "Insert Sorting: ";
    Print(insert, size);

    auto merge = MergeSort(arr, 0, size - 1);

    cout << "Merge Sorting: ";
    Print(merge, size);

    auto quick = QuickSort(arr, 0, size - 1);

    cout << "Quick Sorting: ";
    Print(quick, size);

    return 0;
}
