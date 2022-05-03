#ifndef NODE_H
#define NODE_H

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value = 0)
    {
        this->data = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

#endif