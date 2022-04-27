#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

template <typename T>
class List
{
private:
  template <typename U>
  class Node
  {
  public:
    Node *pNext;
    U data;

    Node(U data = U(), Node *pNext = nullptr)
    {
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
  int getSize() { return _size; }
  T &operator[](const int );
  T getElement(int);
  //friend ostream &operator<<(ostream &out, const List<Type> &);
};

#endif