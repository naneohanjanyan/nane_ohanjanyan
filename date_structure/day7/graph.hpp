#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
private:
  int size;
  bool **arr;

public:
  Graph(int _size);
  void inputMatrix(bool **, int);
  void addNode();
  void print();
  void addEdge(int, int);
  void removeEdge(int, int);
  void removeNode();
  void nodeNeighbrous(int);
  void nodeConnections(int);
  bool isEdgeExists(int, int);
  bool isPathExists(int, int);
};

#endif
