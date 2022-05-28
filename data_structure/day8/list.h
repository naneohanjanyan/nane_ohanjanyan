#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

template <typename T>
class List {
 private:
  template <typename U>
  class Node {
   public:
    Node *pNext;
    U data;

    Node(U data = U(), Node *pNext = nullptr) {
      this->data = data;
      this->pNext = pNext;
    }
  };
  Node<T> *head;
  Node<T> *tail;
  int _size;

 public:
  List();
  ~List();
  void addEnd(T);
  void addAt(T, int);
  void addFront(T);
  void removeAll();
  void removeFront();
  void removeAt(int);
  void removeEnd();
  void _print();
  int getSize() { return _size; }
  bool getNode(int);
  T getElement(int);
  T &operator[](const int);
  void _print1();
  void dicreasListEl(int index);
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
void List<T>::addEnd(T data) {
  if (head == nullptr) {
    head = new Node<T>(data);
    tail = head;
  } else {
    Node<T> *current = tail;
    current->pNext = new Node<T>(data);
    tail = current->pNext;
  }
  _size++;
}

template <typename T>
void List<T>::addFront(T data) {
  head = new Node<T>(data, head);
  _size++;
}

template <typename T>
void List<T>::addAt(T data, int index) {
  if (index == 0) {
    addFront(data);
  } else {
    Node<T> *previous = this->head;
    for (int i = 0; i < index - 1; i++) {
      previous = previous->pNext;
    }
    Node<T> *newNode = new Node<T>(data, previous->pNext);
    previous->pNext = newNode;
    _size++;
  }
}

template <typename T>
T &List<T>::operator[](const int index) {
  Node<T> *current = this->head;
  int count = 0;
  while (current != nullptr) {
    if (count == index) {
      return current->data;
    }
    current = current->pNext;
    count++;
  }
  return head->data;
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
T List<T>::getElement(int index) {
  Node<T> *curr = head;
  for (int i = 0; i < index; i++) {
    curr = curr->pNext;
  }
  return curr->data;
}

template <typename T>
bool List<T>::getNode(int index) {
  Node<T> *head1 = head;
  while (head1) {
    if (head1->data == index) {
      return true;
    }
    head1 = head1->pNext;
  }
  return false;
}

template <typename T>
void List<T>::_print() {
  Node<T> *head1 = head;
  while (head1) {
    cout << head1->data << ", ";
    head1 = head1->pNext;
  }
}

template <typename T>
void List<T>::dicreasListEl(int index) {
  Node<T> *curr = head;
  while (curr) {
    if (curr->data > index) {
      curr->data--;
    }
    curr = curr->pNext;
  }
}

#endif