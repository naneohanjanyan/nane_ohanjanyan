#ifndef ADJACENY_LIST
#define ADJACENCY_LIST

#include <iostream>

#include "list.h"

using namespace std;
class Graph {
 private:
  List<int> *arr;
  int _size;

 public:
  Graph(int);
  Graph();
  void addNode();
  void removeNode(int);
  void addEdge(int, int);
  void removeEdge(int, int);
  void print();
  void findNeighbrous(int);
  bool isEdgeExist(int, int);
};

Graph::Graph(int size) {
  _size = size;
  List<int> *arr = new List<int>[_size];
}

Graph::Graph() {
  _size = 0;
  List<int> *arr = new List<int>[_size];
}

void Graph::addNode() {
  _size++;
  List<int> *arr1 = new List<int>[_size];

  for (int i = 0; i < _size - 1; i++) {
    arr1[i] = arr[i];
  }

  //  List<int> *arr2;
  // arr2 = arr;
  arr = arr1;
  // delete[] arr2;
}

void Graph ::removeNode(int index) {
  _size--;

  List<int> *arr1 = new List<int>[_size];

  for (int i = 0; i < _size + 1; i++)

  {
    if (i != index) {
      removeEdge(i, index);
    }

    if (i < index) {
      arr1[i] = arr[i];
    }
    if (i > index) {
      arr1[i - 1] = arr[i];
    }
  }

  for (int i = 0; i < _size; i++) {
    arr1[i].dicreasListEl(index);
  }

  //   List<int>* arr2;
  //   arr2 = arr;
  arr = arr1;
  //   delete[] arr2;
}

void Graph::addEdge(int node1, int node2) {
  arr[node1].addEnd(node2);
  arr[node2].addEnd(node1);
}

void Graph::removeEdge(int node1, int node2) {
  for (int i = 0; i < arr[node1].getSize(); i++) {
    if (arr[node1].getElement(i) == node2) {
      arr[node1].removeAt(i);
      break;
    }
  }

  for (int i = 0; i < arr[node2].getSize(); i++) {
    if (arr[node2].getElement(i) == node1) {
      arr[node2].removeAt(i);
      break;
    }
  }
}

void Graph::print() {
  for (int i = 0; i < _size; i++) {
    cout << i << "-> ";
    arr[i]._print();
    cout << endl;
  }
}

bool Graph::isEdgeExist(int node1, int node2) {
  return arr[node1].getNode(node2);
}

void Graph::findNeighbrous(int node) {
  cout << node << " -> ";
  arr[node]._print();
}

#endif
