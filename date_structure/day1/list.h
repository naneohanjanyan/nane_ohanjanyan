#ifndef LIST_H
#define LIST_H

class List
{
public:
    int _value;
    List *_next;
    List();
    ~List();
    //List(L value);
    //List GetElement(List*, int);
    void AddAtTheFront(List **, int);
    void AddAtTheEnd(List **, int);
    void AddAt(List **, int, int);
    void RemoveTheFront(List **);
    void RemoveAt(List **, int);
    void RemoveElement(List**, int);
    int listSize(List *);
    int getElement(List*, int); 
    void Add();
    int Count();
    void print(List *);
};
#endif
