#include <iostream>
#include "../day5/node.hpp"
#include <queue>
using namespace std;

class Tree
{
private:
    Node *root;
    void insert(Node *&node, int value);
    void PrintBFS(Node *root);
    /*  void PrintDFS(Node *node);
    int findSum(Node *root);
    int findMax(Node *&root);
    int findMin(Node *&root);*/

public:
    Tree() { root = nullptr; }
    ~Tree() { delete root; }
    void insertNode(int value) { insert(root, value); }
    void printBFS() { PrintBFS(root); }
    /*    void printDFS() { PrintDFS(root); }
      void Max() { cout << findMax(root); }
      void Min() { cout << findMin(root); }
      void Sum() { cout << findSum(root); }*/
};

void Tree::PrintBFS(Node *node)
{
    if (node == NULL)
        return;
    queue<Node *> q;
    q.push(node);
    int space = 0;
    while (!q.empty())
    {
        Node *queue = q.front();

        space += 3;
        for (int i = 3; i < space; i++)
        {
            cout << " ";
        }
        cout << queue->data << "\n";

        q.pop();

        if (queue->left)
        {
            q.push(queue->left);
        }
        if (queue->right)
        {
            q.push(queue->right);
        }
    }
}

void Tree::insert(Node *&node, int value)
{
    if (node == NULL)
    {
        node = new Node(value);
        return;
    }
    queue<Node *> q;
    q.push(node);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);
        else
        {
            temp->left = new Node(value);
            return;
        }

        if (temp->right != NULL)
            q.push(temp->right);
        else
        {
            temp->right = new Node(value);
            return;
        }
    }
}
/*
int Tree::findSum(Node *root)
{
    if (root == NULL)
        return 0;

    int result = root->data;
    int leftSum = findSum(root->left);
    int rightSum = findSum(root->right);

    result += leftSum;
    result += rightSum;

    return result;
}

int Tree::findMax(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }

    int result = root->data;
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    if (leftMax > result)
        result = leftMax;
    if (rightMax > result)
        result = rightMax;

    return result;
}

int Tree::findMin(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int result = root->data;
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);
    if (leftMin < result)
        result = leftMin;
    if (rightMin < result)
        result = rightMin;

    return result;
}

void Tree::PrintDFS(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    cout << node->data << ", ";

    PrintDFS(node->left);
    PrintDFS(node->right);
}

*/