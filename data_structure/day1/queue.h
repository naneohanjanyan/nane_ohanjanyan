#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

template<typename T>
class Queue
{
private:
    List<T> _list;

public:
    bool isEmpty();
    void pushBack(T);
    T popFront();
    T peek();
    Queue();
    ~Queue();
};

#endif