#ifndef EDLL_DOUBLYLINKEDLIST_H
#define EDLL_DOUBLYLINKEDLIST_H
#include "iostream"

#include "Node.h"

template<typename T>
class DoublyLinkedLists {
private:
    Node<T> *head;
    Node<T> *tail;

public:
    DoublyLinkedLists();
    explicit DoublyLinkedLists(T val);
    ~DoublyLinkedLists();

    T front();
    T back();
    void push_front(T val);
    void push_back(T val);
    T pop_front();
    T pop_back();
    void insert(T val, int index);
    void remove(int index);
    T operator[](int index);
    bool empty();
    int getSize();
    void clear();
    void reverse();
    void show();
};

#include "../../src/DoublyLinkedLists.tpp"
#endif // !EDLL_DOUBLYLINKEDLIST_H