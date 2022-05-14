#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class List {
 private:
  template <typename U>
  class Node {
   public:
    Node *pNext;
    U data;
    string key;

    Node(U data = U(), string key = "", Node *pNext = nullptr) {
      this->data = data;
      this->key = key;
      this->pNext = pNext;
    }
  };
  Node<T> *head;
  Node<T> *tail;
  int _size;

 public:
  List();
  ~List();
  void addEnd(T, string);
  void removeAt(int);
  void removeAll();
  void removeFront();
  void removeEnd();
  void _print();
  int getSize() { return _size; }
  string getElement(int);
  T getDate(int);
};

template <typename T>
List<T>::List() {
  head = nullptr;
  _size = 0;
}

template <typename T>
List<T>::~List() {
  removeAll();
}

template <typename T>
void List<T>::addEnd(T data, string key) {
  if (head == nullptr) {
    head = new Node<T>(data, key);
    tail = head;
  } else {
    Node<T> *current = tail;
    current->pNext = new Node<T>(data, key);
    tail = current->pNext;
  }
  _size++;
}

template <typename T>
void List<T>::removeFront() {
  Node<T> *courrent = head;
  head = head->pNext;
  delete courrent;
  _size--;
}

template <typename T>
void List<T>::removeAll() {
  while (_size) {
    removeFront();
  }
}

template <typename T>
void List<T>::removeAt(int index) {
  if (index == 0) {
    removeFront();
  } else {
    Node<T> *cour1 = head;
    for (int i = 0; i < (index - 1); i++) {
      if (cour1 == nullptr) {
        return;
      }
      cour1 = cour1->pNext;
    }
    Node<T> *cour2 = cour1->pNext;
    cour1->pNext = cour2->pNext;
    delete cour2;
    _size--;
  }
}

template <typename T>
void List<T>::removeEnd() {
  Node<T> *current = head;
  for (int i = 0; i <= _size - 2; i++) {
    current = current->pNext;
    if (i == _size - 3) {
      tail = current;
    }
  }
  delete current->pNext;
  current->pNext = nullptr;
  _size--;
}

template <typename T>
string List<T>::getElement(int index) {
  Node<T> *curr = head;
  for (int i = 0; i < index; i++) {
    curr = curr->pNext;
  }
  return curr->key;
}

template <typename T>
T List<T>::getDate(int index) {
  Node<T> *curr = head;
  for (int i = 0; i < index; i++) {
    curr = curr->pNext;
  }
  return curr->data;
}

template <typename T>
void List<T>::_print() {
  Node<T> *head1 = head;
  while (head1) {
    cout << head1->key << " -> " << head1->data << ", ";
    cout << endl;
    head1 = head1->pNext;
  }
}

#endif