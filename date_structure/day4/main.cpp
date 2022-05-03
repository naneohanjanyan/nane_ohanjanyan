#include <iostream>
#include "BinaryTree.hpp"
#include "../day5/node.hpp"
using namespace std;

int main()
{
    Tree tree;

    tree.insertNode(1009);
    tree.insertNode(-99);
    tree.insertNode(444);
    tree.insertNode(10);
    tree.insertNode(2);
    tree.insertNode(99);

    tree.printDFS();

    cout << "\n Max = ";
    tree.Max();

    cout << "\n Min = ";
    tree.Min();

    cout << "\n Sum = ";
    tree.Sum();
    cout << endl;

    return 0;
}