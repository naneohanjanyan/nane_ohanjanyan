#include <iostream>

#include "vector.h"

using namespace std;

int main() {
  Vector<int> n1;
  n1.Add(7);
  n1.AddFront(36);
  n1.AddAt(8, 1);
  n1.RemoveAt(2);
  cout << n1 << endl;
  n1.RemoveAll();
cout << n1 << endl;

  return 0;
}