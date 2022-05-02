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

int Sum(Node *root)
{
    if (root == NULL)
        return 0;

    int result = root->data;
    int leftSum = Sum(root->left);
    int rightSum = Sum(root->right);

    result += leftSum;
    result += rightSum;

    return result;
}

int main()
{

    Node *root = new Node(-10);
    root->left = new Node(14);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    cout << " sum = " << Sum(root) << endl;

    return 0;
}