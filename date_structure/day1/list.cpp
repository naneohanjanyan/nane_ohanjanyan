#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

// template<class L>
List:: List() {
    _value = 0;
    //*_next = 0;
}
List::~List(){
    
}
/*List List::GetElement(List *temp, int position)
{
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->_next;
    }
    return *temp;
}*/
void List::AddAtTheFront(List **head, int newValue)
{
    List *newNode = new List();
    newNode->_value = newValue;
    newNode->_next = *head;
    *head = newNode;
}

void List::AddAtTheEnd(List **head, int newValue)
{
    List *newNode = new List();
    newNode->_value = newValue;
    newNode->_next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    List *last = *head;
    while (last->_next != NULL)
    {
        last = last->_next;
    }
    last->_next = newNode;
}

void List::AddAt(List **head, int newValue, int position)
{
    List *newNode = new List();
    newNode->_value = newValue;
    newNode->_next = NULL;
    List *temp = *head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->_next;
    }
    newNode->_next = temp->_next;
    temp->_next = newNode;
}

void List::RemoveTheFront(List **head)
{
    List *temp = *head;
    *head = (*head)->_next;
    free(temp);
}

void List::RemoveAt(List **head, int position)
{
    List *temp1 = *head;
    if (position == 1)
    {
        *head = temp1->_next;
        free(temp1);
        return;
    }
    for (int i = 0; i < position - 2; i++)
    {
        temp1 = temp1->_next;
    }
    List *temp2 = temp1->_next;
    temp1->_next = temp2->_next;
    free(temp2);
}

void List::RemoveElement(List** head, int value)
{
    List *temp = *head;
    List *prev = NULL;
    if (temp != NULL && temp->_value == value)
    {
        *head = temp->_next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->_value!= value)
        {
            prev = temp;
            temp = temp->_next;
        }
        if (temp == NULL)
            return;
        prev->_next = temp->_next;
        delete temp;
    }
}

int List::listSize(List *node)
{
    int count = 0;
    while (node != NULL)
    {
        count++;
        node = node->_next;
    }
    return count;
}

void List::print(List *node)
{
    while (node != NULL)
    {
        cout << node->_value << "  ";
        node = node->_next;
    }
}