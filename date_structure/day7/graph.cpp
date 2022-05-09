#include "graph.hpp"

#include <iostream>
using namespace std;

Graph::Graph(int _size)
{
  size = _size;
  arr = new bool *[size];
  inputMatrix(arr, size);
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
  if (arr[a][b])
  {
    return true;
  }
  return false;
}

bool Graph::isPathExists(int a, int b)
{

  if (arr[a][b])
  {
    return true;
  }
  else
  {
    for (int i = 0; i < size; i++)
    {
      if (arr[a][i])
      {
        if (arr[i][b])
        {
          return true;
        }
        else
        {
          for (int j = 0; j < size; j++)
          {
            if (arr[i][j] && i != a)
            {
              if (arr[j][b])
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
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

void Graph::nodeConnections(int a)
{
  rootIndex = a;

  int arrOfTree[size];
  arrOfTree[0] = rootIndex;

  int arrIndex = 1;

  for (int k = 0; k < size; k++)
  {
    int i = arrOfTree[k];

    for (int j = 0; j < size; j++)
    {
      if (arr[i][j] == 1)
      {
        arrOfTree[arrIndex] = j;
        arrIndex++;
      }
    }
  }
  for(int i = 0; i < arrIndex; i++){
    cout << arrOfTree[i] << "  ";
  }

}