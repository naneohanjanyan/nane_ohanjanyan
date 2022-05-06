#ifndef GRAPH_H
#define GRAPH_H

class Graph {
 private:
  int size;
  bool **arr;

 public:
  Graph(int _size);
  void inputMatrix(bool **arr, int size);
  void addNode();
  void print();
  void addEdge(int a, int b);
  void removeEdge(int a, int b);
  void removeNode();
  bool isEdgeExists(int a, int b);
};

#endif
