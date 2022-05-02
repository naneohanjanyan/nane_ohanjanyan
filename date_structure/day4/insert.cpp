#include <iostream>
#include <queue>
using namespace std;

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

void insertNode(Node *node, int value)
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

void printBfs(Node *node)
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

int main()
{

    Node *root = new Node(0);
    root->left = new Node(1);
    root->left->left = new Node(3);
    root->left->right = new Node(50);
    root->left->left->right = new Node(34);
    root->right = new Node(2);
    root->right->left = new Node(10);
    printBfs(root);
    cout << endl;
    insertNode(root, 86);
    printBfs(root);
    cout << endl;

    return 0;
}