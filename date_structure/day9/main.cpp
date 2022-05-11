#include <climits>
#include <iostream>

#include "graphShortestPath.hpp"
using namespace std;

int main()
{
  int **arr = new int *[6]
  {
    new int[6]{0, 5, INT_MAX, 2, INT_MAX, 3},
        new int[6]{5, 0, 1, 4, INT_MAX, INT_MAX},
        new int[6]{INT_MAX, 1, 0, INT_MAX, 10, INT_MAX},
        new int[6]{2, 4, INT_MAX, 0, 3, 7},
        new int[6]{4, 10, INT_MAX, 3, 0, 8},
        new int[6] { 3, INT_MAX, INT_MAX, 7, 8, 0 }
  };

  Graph graph(arr, 6);
  graph.findDistance(3);
  cout << endl;
  return 0;
}