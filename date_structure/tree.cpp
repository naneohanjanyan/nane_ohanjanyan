#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node* left;
  Node* right;

  Node(int value = 0, Node* left = nullptr, Node* right = nullptr) {
    this->data = value;
    this->left = left;
    this->right = right;
  }
};

void print(Node* node) {
  if (node == NULL) return;

  cout << node->data << ", ";

  print(node->left);
  print(node->right);
}

int main() {

  Node* root = new Node(0);
  root->left = new Node(1);
  root->right = new Node(2);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  print(root);
  cout << endl;
  return 0;
}
