#ifndef VECTOR_H
#define VECTOR_H

#include <ostream>
using std::ostream;

template <typename T>
class Vector {
 private:
  int _size;
  int _curr_size;
  T *_arr;

 public:
  int GetSize() const { return _curr_size; }
  void AddFront(T);
  void Add(T);
  void AddAt(T, int);
  void RemoveAt(int);
  void RemoveAll();
  void AddMemory();
  T &operator[](const int index) const;
  Vector();
  ~Vector();
};

template <typename T>
void Vector<T>::Add(T value) {
  if (_curr_size == _size) {
    AddMemory();
  }

  _arr[_curr_size] = value;
  _curr_size++;
}

template <typename T>
void Vector<T>::AddFront(T value) {
  if (_curr_size == _size) {
    AddMemory();
  }
  for (int i = _curr_size; i > 0; i--) {
    _arr[i] = _arr[i - 1];
  }
  _arr[0] = value;
  _curr_size++;
}

template <typename T>
void Vector<T>::AddMemory() {
  _size *= 2;
  T *arr2 = new int[_size];
  for (int i = 0; i < _size / 2; i++) {
    arr2[i] = _arr[i];
  }
  delete[] _arr;
  _arr = arr2;
}

template <typename T>
void Vector<T>::AddAt(T value, int index) {
  if (_curr_size == _size) {
    AddMemory();
  }
  for (int i = _curr_size; i > index; i--) {
    _arr[i] = _arr[i - 1];
  }
  _arr[index] = value;
  _curr_size++;
}

template <typename T>
void Vector<T>::RemoveAll() {
  ~Vector();
}

template <typename T>
void Vector<T>::RemoveAt(int index) {
  for (int i = index; i < _curr_size; i++) {
    _arr[i] = _arr[i + 1];
  }
  _curr_size--;
}

template <typename T>
T &Vector<T>::operator[](const int index) const {
  return _arr[index];
}

template <typename T>
ostream &operator<<(ostream &out, const Vector<T> &n) {
  for (int i = 0; i < n.GetSize(); i++) {
    out << n[i] << "  ";
  }

  return out;
}

template <typename T>
Vector<T>::Vector(/* args */) {
  _size = 32;
  _curr_size = 0;
  _arr = new T[_size];
}

template <typename T>
Vector<T>::~Vector() {
  delete[] _arr;
  _size = 32;
  _curr_size = 0;
  _arr = new T[_size];
}

#endif