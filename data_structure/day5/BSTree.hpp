#include <iostream>
#include "node.hpp"
#include <queue>
using namespace std;

class Tree
{
private:
    Node *root;
    void insert(Node *&node, int value);
    void PrintDFS(Node *temp);
    void PrintBFS(Node *temp);
    void SortPrint(Node *temp);

public:
    Tree() { root = nullptr; }
    void printDFS() { PrintDFS(root); }
    void printBFS() { PrintBFS(root); }
    void sortPrint() { SortPrint(root); }
    void insertNode(int data) { insert(root, data); }
    void deleted(int value);
    Node searchData(int data);
    Node *searchPreviousData(int data);
};

void Tree::insert(Node *&node, int value)
{
    if (node == nullptr)
    {
        node = new Node(value);
    }
    else
    {
        if (value <= node->data)
        {
            insert(node->left, value);
        }
        else
        {
            insert(node->right, value);
        }
    }
}

void Tree::PrintBFS(Node *node)
{
    if (node == NULL)
        return;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *queue = q.front();
        cout << queue->data << ", ";
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

void Tree::PrintDFS(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->data << "  ";

    PrintDFS(temp->left);
    PrintDFS(temp->right);
}

void Tree::SortPrint(Node *node)
{
    if (node == NULL)
        return;
    SortPrint(node->left);
    cout << node->data << "  ";
    SortPrint(node->right);
}

Node Tree::searchData(int data)
{
    if (root == nullptr)
    {
        cout << endl;
        return *root;
    }
    else
    {
        Node *temp = root;
        while (temp)
        {
            if (data <= temp->data)
            {
                if (temp->left->data == data)
                {
                    return *temp->left;
                }
                temp = temp->left;
            }
            else
            {
                if (temp->right->data == data)
                {
                    return *temp->right;
                }
                temp = temp->right;
            }
        }
        return *root;
    }
}

void Tree::deleted(int value)
{
    Node *temp = searchData(value);
    Node *curr;
    curr = temp->right;
    Node *previous;
    if (curr != nullptr)
    {
        if (curr->right->left == nullptr)
        {
            temp->data = curr->data;
            temp->right = curr->right;
            delete curr;
        }
        else
        {
            previous = temp;
            while (curr->left)
            {
                previous = curr;
                curr = curr->left;
            }
            temp->data = curr->data;
            previous->left = curr->right;

            delete curr;
        }
    }
    else
    {
        previous = searchPreviousData(value);
        previous->left = temp->left;
        delete temp;
    }
}

Node *Tree::searchPreviousData(int data)
{
    if (root == nullptr)
    {
        cout << endl;
        return root;
    }
    else
    {
        Node *temp = root;
        while (temp)
        {
            if (data < temp->data)
            {
                if (temp->left->data == data)
                {
                    return temp;
                }
                temp = temp->left;
            }
            else
            {
                if (temp->right->data == data)
                {
                    return temp;
                }
                temp = temp->right;
            }
        }

        cout << endl;
        return root;
    }
}