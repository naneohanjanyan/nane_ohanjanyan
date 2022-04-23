#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List obj;
    List *head = NULL;
    List *second = NULL;
    head = new List();
    second = new List();

    head->_value = 1;
    head->_next = NULL;

    cout << "Add at the front:  ";
    obj.AddAtTheFront(&head, 0);
    obj.print(head);
    cout << endl;

    cout << "Add at the end:  ";
    obj.AddAtTheEnd(&head, 3);
    obj.print(head);
    cout << endl;

    cout << "Add at the position:  ";
    obj.AddAt(&head, -7, 1);
    obj.print(head);
    cout << endl;
    
    cout << "List size: " << obj.listSize(head) << "\n";
   // cout << "Get element:  " << obj.GetElement(head, 2);
    
    cout << "Remove at the front:  ";
    obj.RemoveTheFront(&head);
    obj.print(head);
    cout << endl;

    cout << "Remove element at the value:  ";
    obj.RemoveElement(&head, 2);
    obj.print(head);

    cout << "Remove at the position:  ";
    obj.RemoveAt(&head, 3);
    obj.print(head);
    cout << endl;
    return 0;
    
}
