#ifndef PATH_H
#define PATH_H

#include <climits>
using namespace std;

class Graph {
 private:
  int size;
  int **arr;

 public:
  Graph() = default;
  Graph(int **_arr, int _size);
  //   ~Graph();
  void findDistance();
  void inputMatrix(int **, int);
  void print();
};

Graph::Graph(int **_arr, int _size) {
  size = _size;
  arr = _arr;
}

void Graph::inputMatrix(int **arr, int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = new int[size];
    for (int j = 0; j < size; j++) {
      cin >> arr[i][j];
      if (arr[i][j] = -1) {
        arr[i][j] = INT_MAX;
      }
    }
  }
}

void Graph::print() {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
}

void Graph ::findDistance(int start_vertex) {
  bool is_visited[size] = {false};
  int distance[size] = {INT_MAX};

  distance[start_vertex] = 0;
  is_visited[start_vertex] = true;

  for (int i = 0; i < size; i++) {
    if (arr[start_vertex][i] != INT_MAX && arr[start_vertex][i] != 0) {
      distance[i] = arr[start_vertex][i];
    }
  }

  //   for (int i = 0; i < size; i++) {
  //     for (int j = 0; i < size; i++) {
  //     }
  //   }
  // }

#endif