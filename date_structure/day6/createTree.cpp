#include <iostream>
#include "../day5/node.hpp"
#include "../day4/BinaryTree.hpp"
using namespace std;

int getRootIndex(bool **arr, int size)
{
    int rootIndex = -1;

    for (int j = 0; j < size; j++)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
            if (arr[i][j] == 0)
            {
                count++;
            }

        if (count == size)
        {
            rootIndex = j;
            break;
        }
    }
    return rootIndex;
}

void PrintDFS(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->data << "  ";

    PrintDFS(temp->left);
    PrintDFS(temp->right);
}

Node *createTree(int index, int size, bool **arr)
{
    Node *node = new Node(index);
    int left = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[index][i] == 1)
        {
            if (left == 1)
            {
                node->left = createTree(i, size, arr);
            }
            else if (left == 2)
            {
                node->right = createTree(i, size, arr);
            }
            left++;
        }
    }
    return node;
}

int main()
{
    int size = 5;
    bool **arr = new bool *[size];
    arr[size][size] = {
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};

    int root_index = getRootIndex(arr, size);
    Node *root = createTree(root_index, size, arr);
    PrintDFS(root);

    return 0;
}
