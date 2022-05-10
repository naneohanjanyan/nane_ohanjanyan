#include "graph.hpp"

#include <iostream>
using namespace std;

Graph::Graph(int _size)
{
  size = _size;
  arr = new bool *[size];
  inputMatrix(arr, size);
}

Graph::~Graph()
{
  delete[] arr;
  size = 0;
}

void Graph::inputMatrix(bool **arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = new bool[size];
    for (int j = 0; j < size; j++)
    {
      cin >> arr[i][j];
    }
  }
}

void Graph::addNode()
{
  size++;
  bool **arr1 = new bool *[size];
  for (int i = 0; i < size; i++)
  {
    arr1[i] = new bool[size];
    for (int j = 0; j < size; j++)
    {
      if (j < size - 1 && i < size - 1)
      {
        arr1[i][j] = arr[i][j];
      }
      else
      {
        arr1[i][j] = 0;
      }
    }
  }

  bool **arr2;
  arr2 = arr;
  arr = arr1;
  delete[] arr2;
}

void Graph::removeNode()
{
  size--;
  bool **arr1 = new bool *[size];
  for (int i = 0; i < size; i++)
  {
    arr1[i] = new bool[size];
    for (int j = 0; j < size; j++)
    {
      arr1[i][j] = arr[i][j];
    }
  }
  bool **arr2;
  arr2 = arr;
  arr = arr1;
  delete[] arr2;
}

void Graph::print()
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
}

void Graph::addEdge(int a, int b)
{
  if (a >= size || b >= size)
  {
    cout << "out of range \n";
    return;
  }
  arr[b][a] = 1;
  arr[a][b] = 1;
}

void Graph::removeEdge(int a, int b)
{
  if (a >= size || b >= size)
  {
    cout << "out of range \n";
    return;
  }
  arr[b][a] = 0;
  arr[a][b] = 0;
}

bool Graph ::isEdgeExists(int a, int b)
{
  return arr[a][b];
}

bool Graph ::isPathExists(int node1, int node2)
{
  bool is_visited[size] = {false};
  int connections[size];

  is_visited[node1] = true;
  connections[0] = node1;

  int connArrIndex = 1;
  int minPath = 1;

  for (int k = 0; k < size; k++)
  {
    int i = connections[k];

    if (minPath <= k)
    {
      return is_visited[node2];
    }

    for (int j = 0; j < size; j++)
    {
      if (arr[i][j] == 1 && is_visited[j] == false)
      {
        connections[connArrIndex] = j;
        is_visited[j] = true;
        connArrIndex++;
        minPath++;
      }
    }
  }

  return is_visited[node2];
}

void Graph::nodeNeighbrous(int a)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[a][i])
    {
      cout << i << "   ";
    }
  }
}

void Graph ::nodeConnections(int x)
{
  bool is_visited[size] = {false};
  int connections[size];

  is_visited[x] = true;
  connections[0] = x;

  int connArrIndex = 1;
  int minPath = 1;

  for (int k = 0; k < size; k++)
  {
    int i = connections[k];
    if (minPath <= k)
    {
      for (int i = 0; i < size; i++)
      {
        if (is_visited[i])
        {
          cout << i << "  ";
        }
      }
      return;
    }

    for (int j = 0; j < size; j++)
    {
      if (arr[i][j] == 1 && is_visited[j] == false)
      {
        connections[connArrIndex] = j;
        is_visited[j] = true;
        connArrIndex++;
        minPath++;
      }
    }
  }

  for (int i = 0; i < size; i++)
  {
    if (is_visited[i])
    {
      cout << i << "  ";
    }
  }
}