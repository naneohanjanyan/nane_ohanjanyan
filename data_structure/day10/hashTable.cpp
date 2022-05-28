#include <iostream>
#include "hashTable.hpp"
#include "list.h"
using namespace std;

HashTable::HashTable()
{
    _countElement = 0;
    _sizeArr = 5;
    _arr = new List<int>[_sizeArr];
}

HashTable::~HashTable()
{
    delete[] _arr;
    _sizeArr = 0;
    _countElement = 0;
}

int HashTable::hash(string key)
{
    unsigned int index = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        index += key[i];
    }

    return index % _sizeArr;
}

bool HashTable::isExist(string key)
{
    int index = hash(key);
    for (int i = 0; i < _arr[index].getSize(); i++)
    {
        if (_arr[index].getElement(i) == key)
        {
            return true;
        }
    }
    return false;
}

void HashTable::insert(string key, int date)
{
    if (_countElement > _sizeArr * 0.75)
    {
        resize();
    }

    if (!isExist(key))
    {
        int index = hash(key);
        _arr[index].addEnd(date, key);
        _countElement++;
    }
    else
    {
        cout << key << " exist\n";
    }
}

void HashTable::remove(string key)
{
    if (_countElement < _sizeArr * 0.25)
    {
        rehash();
    }

    int a = hash(key);
    int temp;
    for (int i = 0; i < _arr[a].getSize(); i++)
    {
        if (_arr[a].getElement(i) == key)
        {
            temp = i;
            break;
        }
    }
    _arr[a].removeAt(temp);
    _countElement--;
}

void HashTable::resize()
{
    _sizeArr = _sizeArr * 2;

    List<int> *arr1 = new List<int>[_sizeArr];
    for (int i = 0; i < (_sizeArr / 2); i++)
    {
        if (_arr[i].getSize() != 0)
        {
            int index = hash(_arr[i].getElement(0));
            arr1[index] = _arr[i];
        }
    }

    _arr = arr1;
}

void HashTable::rehash()
{
    _sizeArr = _sizeArr / 2;

    List<int> *newArr = new List<int>[_sizeArr];
    int newArrIndex = 0;
    for (int i = 0; i < (_sizeArr * 2); i++)
    {
        if (_arr[i].getSize() != 0)
        {
            int a = hash(_arr[i].getElement(0));
            newArr[a] = _arr[i];
            newArrIndex++;
        }
    }
    _arr = newArr;
}

int HashTable::countElement() { return _countElement; }

int HashTable::find(string key)
{
    int index = hash(key);
    for (int i = 0; i < _arr[index].getSize(); i++)
    {
        if (_arr[index].getElement(i) == key)
        {
            return _arr[index].getDate(i);
        }
    }
    return 0;
}

void HashTable::print()
{
    for (int i = 0; i < _sizeArr; i++)
    {
        _arr[i]._print();
    }
}