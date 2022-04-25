#include "queue.h"

template<typename T>
T Queue<T>::popFront()
{ 
    T return_value = _list[1];
    _list.Remove_front();
    return return_value;
}

template<typename T>
T  Queue<T>::peek()
{
   return _list[0];
} 

template<typename T>
bool Queue<T>::isEmpty()
{
    return _list.GetSize() == 0;
}

template<typename T>
void Queue<T>::pushBack(T value)
{
    _list.Add(value);
}

template<typename T>
Queue<T>::Queue() = default;

template<typename T>
Queue<T>::~Queue()
{
    _list.removeAll();
}