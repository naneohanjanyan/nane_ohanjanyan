#include <iostream>

#include "graph.cpp"
#include "graph.hpp"
using namespace std;

int main() {
  Graph graph(2);
  graph.addNode();
  cout << endl;
  graph.print();
  graph.addEdge(2, 1);
  cout << endl;
  graph.print();
  cout << endl;
  graph.addNode();
  graph.addEdge(3, 3);
  graph.print();
  cout << endl;
  graph.removeEdge(3, 3);
  graph.print();

  cout << endl;
  graph.removeNode();
  graph.print();

  cout << endl << graph.isEdgeExists(2, 1);

  cout << endl;

  return 0;
}