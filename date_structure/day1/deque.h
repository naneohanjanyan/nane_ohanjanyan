#ifndef DEQUE_H
#define DEQUE_H

#include "list.h"

template <typename T>
class Deque
{
private:
    List<T> _list;

public:
    bool isEmpty();
    void popBack();
    void pushFront(T);
    void pushBack(T);
    T popFront();
    T peekFront();
    T peekBack();
    Deque();
    ~Deque();
};

#endif