#include <iostream>

#include "graphAdjacenyList.hpp"
#include "list.h"

using namespace std;

int main() {
  Graph a1;
  cout << " add node\n";

  a1.addNode();
  a1.addNode();
  a1.addNode();
  a1.addNode();

  a1.print();

  cout << "\n add edge\n";

  a1.addEdge(0, 1);
  a1.addEdge(0, 2);
  a1.addEdge(0, 3);
  a1.addEdge(2, 3);
  a1.addEdge(1, 2);
  a1.print();

  cout << "\nedge exist: " << a1.isEdgeExist(0, 1);

  cout << "\n\n find neighbrous\n";
  a1.findNeighbrous(0);

  cout << "\n\n remove edge \n";
  a1.removeEdge(0, 2);
  a1.print();

  cout << " \n\n remove node  \n";
  a1.removeNode(2);
  a1.print();
  cout << endl;

  return 0;
}