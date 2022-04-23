#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List obj;
    List *head = NULL;
    head = new List();

    head->_value = 1;
    head->_next = NULL;

    cout << "Add at the front:  ";
    obj.AddAtTheFront(&head, 0);
    obj.print(head);
   
    cout << "\nAdd at the end:  ";
    obj.AddAtTheEnd(&head, 3);
    obj.print(head);
   
    cout << "\nAdd at the position:  ";
    obj.AddAt(&head, -7, 1);
    obj.print(head);

    cout << "\nList size: " << obj.listSize(head);
    // cout << "Get element:  " << obj.GetElement(head, 2);

    cout << "\nRemove at the front:  ";
    obj.RemoveTheFront(&head);
    obj.print(head);
    
    cout << "\nRemove element at the value:  ";
    obj.RemoveElement(&head, 2);
    obj.print(head);

    cout << "\nRemove at the position:  ";
    obj.RemoveAt(&head, 3);
    obj.print(head);
    cout << endl;
    return 0;
}
