#include <iostream>
#include "BSTree.hpp"
#include "node.hpp"
using namespace std;

int main()
{
    Tree tree;
    tree.insertNode(19);
    tree.insertNode(0);
    tree.insertNode(99);
    tree.insertNode(565);
    tree.insertNode(444);
    tree.insertNode(-1);
    tree.insertNode(2);
    tree.insertNode(999);
    tree.insertNode(2);

    tree.printDFS();
    cout << endl;
    
    Node x1 = tree.searchData(444);
    cout << x1.data;
    cout << endl; 
    
    tree.sortPrint();
    cout << endl;

    return 0;
}