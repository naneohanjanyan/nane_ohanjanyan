#include <stdlib.h>
#include <ctime>
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
///////////////////////////////////////////////////////////////
void bubbleSort(int size, int arr1[])
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr1[j] > arr1[j + 1])
      {
        swap(&arr1[j], &arr1[j + 1]);
      }
    }
  }
}
//////////////////////////////////////////////////////////////
void insertion(int size, int arr[])
{
  int temp, j;
  for (int i = 1; i < size; i++)
  {
    temp = arr[i];
    for (j = i - 1; j >= 0 && temp < arr[j]; j--)
    {
      arr[j + 1] = arr[j];
      arr[j] = temp;
    }
  }
}
///////////////////////////////////////////////////////////////
int *Merge(int *arr1, int size1, int *arr2, int size2);

int *MergeSort(int arr[], int size)
{
  if (size == 1)
  {
    return arr;
  }
  else
  {
    int a, b;
    a = size / 2;
    b = size - a;
    int *arr1 = new int[a];
    int *arr2 = new int[b];
    for (int i = 0; i < a; i++)
    {
      arr1[i] = arr[i];
    }
    for (int i = 0; i < b; i++)
    {
      arr2[i] = arr[i + a];
    }
    return Merge(MergeSort(arr1, a), a, MergeSort(arr2, b), b);
  }
}

int *Merge(int *arr1, int size1, int *arr2, int size2)
{
  int *arr = new int[size1 + size2];
  int x = 0;
  int y = 0, k = 0;
  while (x < size1 && y < size2)
  {
    if (arr1[x] <= arr2[y])
    {
      arr[k] = arr1[x];
      x++;
    }
    else
    {
      arr[k] = arr2[y];
      y++;
    }
    k++;
  }
  while (x < size1)
  {
    arr[k] = arr1[x];
    x++;
    k++;
  }

  while (y < size2)
  {
    arr[k] = arr2[y];
    y++;
    k++;
  }

  return arr;
}
///////////////////////////////////////////////////////////////////////////////////

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);

  return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
  }
}

int main()
{
  srand(time(0));

  int size = 20000;

  int arr1[size], arr2[size], arr3[size], arr4[size];
   for (int i = 0; i < size; i++)
  {
    arr1[i] = rand() % size + 1;
    arr2[i] = arr1[i];
    arr3[i] = arr1[i];
    arr4[i] = arr1[i];
  }

  time_t start1 = clock();
  bubbleSort(size, arr1);
  time_t end1 = clock();

  time_t start2 = clock();
  insertion(size, arr2);
  time_t end2 = clock();

  time_t start3 = clock();
  int *a = MergeSort(arr3, size);
  time_t end3 = clock();

  time_t start4 = clock();
  quickSort(arr4, 0, size - 1);
  time_t end4 = clock();

  cout << "bubble sort = " << (end1 - start1) / 1000 << endl;
  cout << "insertion sort = " << (end2 - start2) / 1000 << endl;
  cout << "merge sort = " << (end3 - start3) / 1000 << endl;
  cout << "quick sort = " << (end4 - start4) / 1000 << endl;
 
 
  return 0;
}