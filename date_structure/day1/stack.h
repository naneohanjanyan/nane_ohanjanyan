#ifndef STECK_H
#define STACK_H

#include "list.h"

template <typename T>
class Stack
{
private:
  List<T> _list;

public:
  T pop();
  T peek();
  void push(T);
  bool isEmpty();
  Stack();
  ~Stack();
};

template <typename T>
T Stack<T>::pop()
{
    T return_value = peek();
    _list.removeEnd();
    return return_value;
}

template <typename T>
T Stack<T>::peek()
{
    return _list[_list.GetSize() - 1];
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return _list.GetSize() == 0;
}

template <typename T>
void Stack<T>::push(T value)
{
    _list.addEnd(value);
}

template <typename T>
Stack<T>::Stack() = default;

template <typename T>
Stack<T>::~Stack()
{
    _list.removeAll();
}

#endif
