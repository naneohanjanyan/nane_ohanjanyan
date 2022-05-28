#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include "list.h"

using namespace std;

class HashTable
{
private:
  List<int> *_arr;
  int _countElement;
  int _sizeArr;
  int hash(string);

public:
  HashTable();
  ~HashTable();
  bool isExist(string);
  int countElement();
  int find(string);
  void insert(string, int);
  void remove(string);
  void resize();
  void rehash();
  void print();
};

#endif