#ifndef PATH_H
#define PATH_H

#include <iostream>
#include <climits>
using namespace std;

class Graph
{
private:
  int _size;
  int **_arr;
  int findMinDistance(int distace[], bool isVisited[]);

public:
  Graph() = default;
  Graph(int **arr, int size);
  ~Graph();
  void findDistance(int startVertex);
};

Graph::Graph(int **arr, int size)
{
  _size = size;
  _arr = arr;
}

Graph::~Graph()
{
  delete[] _arr;
}

int Graph::findMinDistance(int distace[], bool isVisited[])
{
  int min = INT_MAX;
  int index;
  for (int i = 0; i < _size; i++)
  {
    if (!isVisited[i] && distace[i] <= min)
    {
      min = distace[i];
      index = i;
    }
  }
  return index;
}

void Graph::findDistance(int startVertex)
{
  bool isvisited[_size];
  int distance[_size];

  for (int i = 0; i < _size; i++)
  {
    distance[i] = INT_MAX;
    isvisited[i] = false;
  }

  distance[startVertex] = 0;

  for (int i = 0; i < _size; i++)
  {
    int minWeightIndex = findMinDistance(distance, isvisited);
    isvisited[startVertex] = true;

    if (distance[minWeightIndex] == INT_MAX)
    {
      break;
    }

    for (int j = 0; j < _size; j++)
    {
      if (_arr[minWeightIndex][j] != INT_MAX && distance[minWeightIndex] != INT_MAX && distance[minWeightIndex] + _arr[minWeightIndex][j] < distance[j])
      {
        distance[j] = distance[minWeightIndex] + _arr[minWeightIndex][j];
      }
    }
    isvisited[minWeightIndex] = true;
  }

  for (int i = 0; i < _size; i++)
  {
    cout << distance[i] << "  ";
  }
}

#endif
