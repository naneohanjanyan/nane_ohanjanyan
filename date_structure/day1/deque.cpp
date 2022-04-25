#include "deque.h"

template <typename T>
T Deque<T>::popFront()
{
    T return_value = _list[1];
    _list.Remove_front();
    return return_value;
}

template <typename T>
void Deque<T>::popBack()
{
    _list.Remove_back();
}

template <typename T>
bool Deque<T>::isEmpty()
{
    return _list.GetSize() == 0;
}

template <typename T>
void Deque<T>::pushFront(T value)
{
    _list.Add_front(value);
}

template <typename T>
void Deque<T>::pushBack(T value)
{
    _list.Add(value);
}

template <typename T>
T Deque<T>::peekFront()
{
    return _list[0];
}

template <typename T>
T Deque<T>::peekBack()
{
    return _list[_list.GetSize() - 1];
}

template <typename T>
Deque<T>::Deque() = default;

template <typename T>
Deque<T>::~Deque()
{
    _list.removeAll();
}
