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

void printDfs(Node *node)
{
  if (node == NULL)
    return;

  cout << node->data << ", ";

  printDfs(node->left);
  printDfs(node->right);
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
  root->right = new Node(2);
  root->left->left = new Node(3);
  root->left->right = new Node(4);

  printDfs(root);
  cout << endl;
  printBfs(root);
  cout << endl;
  return 0;
}
