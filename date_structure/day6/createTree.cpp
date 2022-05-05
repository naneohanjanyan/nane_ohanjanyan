#include <iostream>

#include "../day4/BinaryTree.hpp"
#include "../day5/node.hpp"
using namespace std;

bool checkRoot(bool **arr, int size);

void inputMatrix(bool **arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = new bool[size];
    for (int j = 0; j < size; j++) {
      cin >> arr[i][j];
    }
  }
}

bool checkTree(bool **arr, int size) {
  for (int i = 0; i < size; i++) {
    int oneCount = 0;
    for (int j = 0; j < size; j++) {
      if (arr[i][j] == 1 && arr[j][i] == 1) {
        return false;
      }
      if (arr[i][j] == 1) {
        oneCount++;
      }
      if (oneCount > 2) {
        return false;
      }
    }
  }
  if (!checkRoot(arr, size)) {
    return false;
  } else {
    return true;
  }
}

bool checkRoot(bool **arr, int size) {
  int rootCount = 0;
  for (int i = 0; i < size; i++) {
    int oneCountinColumn = 0;
    int count = 0;
    for (int j = 0; j < size; j++) {
      if (arr[j][i] == 0) {
        count++;
      }

      if (count == size) {
        rootCount++;
      }

      if (rootCount > 1) {
        return false;
      }

      if (arr[j][i] == 1) {
        oneCountinColumn++;
      }

      if (oneCountinColumn >= 2) {
        return false;
      }
    }
  }

  if (rootCount == 0) return false;

  return true;
}

int getRootIndex(bool **arr, int size) {
  int rootIndex = 0;
  for (int i = 0; i < size; i++) {
    int count = 0;
    for (int j = 0; j < size; j++)
      if (arr[j][i] == 0) {
        count++;
      }

    if (count == size) {
      rootIndex = i;
      return i;
    }
  }

  return rootIndex;
}

int main() {
  int size;
  cout << " size: ";
  cin >> size;
  bool **arr = new bool *[size];
  inputMatrix(arr, size);
  int rootIndex;
  if (checkTree(arr, size)) {
    rootIndex = getRootIndex(arr, size);

    int arr1[size];
    arr1[0] = rootIndex;

    int a = 1;

    for (int k = 0; k < size; k++) {
      int i = arr1[k];

      for (int j = 0; j < size; j++) {
        if (arr[i][j] == 1) {
          arr1[a] = j;
          a++;
        }
      }
    }

    Tree a1;
    for (int i = 0; i < size; i++) {
      a1.insertNode(arr1[i]);
    }

    a1.printDFS();

    cout << endl;
  } else {
    cout << ">>>>>>>> ||||  It's not binary tree  |||||| <<<<<<<<<<<<<<  \n";
  }
  return 0;
}
