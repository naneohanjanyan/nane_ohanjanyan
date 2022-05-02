#include <iostream>
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

int findMax(Node *root)
{
    if (root == NULL)
        return 0;

    int result = root->data;
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    if (leftMax > result)
        result = leftMax;
    if (rightMax > result)
        result = rightMax;

    return result;
}

int findMin(Node *root)
{
    if (root == NULL)
        return 0;

    int result = root->data;
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);
    if (leftMin < result)
        result = leftMin;
    if (rightMin < result)
        result = rightMin;

    return result;
}

int main()
{

    Node *root = new Node(0);
    root->left = new Node(-1);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    cout << " Max = " << findMax(root) << endl;
    cout << " Min = " << findMin(root) << endl;
    return 0;
}