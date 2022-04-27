#include <stdlib.h>

#include <ctime>
#include <iostream>
using namespace std;

void bubbleSort(int size, int arr1[]) {
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr1[j] > arr1[j + 1]) {
        temp = arr1[j];
        arr1[j] = arr1[j + 1];
        arr1[j + 1] = temp;
      }
    }
  }
}

void insertion(int size, int arr[]) {
  int temp, j;
  for (int i = 1; i < size; i++) {
    temp = arr[i];
    for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
      arr[j + 1] = arr[j];
      arr[j] = temp;
    }
  }
}

/*
void insertion(int size, int arr[]) {
  int temp, j;
  bool a = true;
  for (int i = 1; i < size; i++) {
    if (arr[i] < arr[i - 1]) {
      for (j = i - 1; j >= 0 && a; j--) {
        if (arr[i] >= arr[j] || j == 0) {
          a = false;
          temp = arr[i];
          arr[i] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }

      a = true;
    }
  }
}
*/

void print(int size, int arr1[]) {
  for (int i = 0; i < size; i++) {
    cout << arr1[i] << "  ";
  }
}

int main() {
  srand(time(0));

  int size = 20000;

  int arr1[size], arr2[size];
  for (int i = 0; i < size; i++) {
    arr1[i] = rand() % size + 1;
    arr2[i] = arr1[i];
    //  cout << arr1[i] << "  ";
  }
  cout << endl;
  time_t start1 = clock();
  bubbleSort(size, arr1);
  time_t end1 = clock();

  time_t start2 = clock();
  insertion(size, arr2);
  time_t end2 = clock();

  cout << "bubble sort = " << (end1 - start1) / 1000 << endl;
  cout << "insertion sort = " << (end2 - start2) / 1000 << endl;

  return 0;
}