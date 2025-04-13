#ifndef SRC_DOUBLYLINKEDLISTS_TPP
#define SRC_DOUBLYLINKEDLISTS_TPP

#include "eDll/DoublyLinkedLists.h"
#include <algorithm>

template<typename T>
DoublyLinkedLists<T>::DoublyLinkedLists() {
    head = nullptr;
    tail = nullptr;
}

template<typename T>
DoublyLinkedLists<T>::DoublyLinkedLists(T val) {
    head = new Node<T>(val);
    tail = head;
}

template<typename T>
bool DoublyLinkedLists<T>::empty() {
    return head == nullptr;
}

template<typename T>
int DoublyLinkedLists<T>::getSize() {
    Node<T> *temp = head;
    int count = 0;

    while(temp){
        count++;
        temp = temp->next;
    }

    return count;
}



template<typename T>
T DoublyLinkedLists<T>::front() {
    return head->val;
}

template<typename T>
T DoublyLinkedLists<T>::back() {
    return tail->val;
}

template<typename T>
void DoublyLinkedLists<T>::push_front(T val) {
    auto *newNode = new Node<T>(val);
    if(head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

template<typename T>
void DoublyLinkedLists<T>::push_back(T val) {
    auto *newNode = new Node<T>(val);
    if(head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template<typename T>
T DoublyLinkedLists<T>::pop_front() {

    if(!head){
        throw std::out_of_range("Lista vacia");
    }

    Node<T> *newNode = head;
    auto val = head->val;

    if(head == tail){
        head = nullptr;
        tail = nullptr;
    }
    else{
        head = head->next;
        head->prev = nullptr;
    }

    delete newNode;
    return val;
}

template<typename T>
T DoublyLinkedLists<T>::pop_back() {
    if(!head){
        throw std::out_of_range("Lista vacia");
    }

    Node<T> *newNode = tail;
    auto val = tail->val;

    if(head == tail){
        head = nullptr;
        tail = nullptr;
    }
    else{
        tail = tail->prev;
        tail->next = nullptr;
    }

    delete newNode;
    return val;
}

template<typename T>
void DoublyLinkedLists<T>::insert(T val, int index) {

    int size = getSize();

    if(index < 0 || index > size) {
        throw std::out_of_range("Indice invalido");
    }

    if(index == 0) {
        push_front(val);
        return;
    }

    if(index == size) {
        push_back(val);
        return;
    }

    auto newNode = new Node<T> (val);

    if(index > size / 2){
        Node<T> *curr = tail;
        for(int i = size - 1; i > index; i--) {
            curr = curr->prev;
        }

        newNode->next = curr;
        newNode->prev = curr->prev;
        curr->prev->next = newNode;
        curr->prev = newNode;
    } else {
        Node<T> *curr = head;

        for(int i = 0; i  < index - 1; i++) {
            curr = curr->next;
        }

        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next->prev = newNode;
        curr->next = newNode;
    }
}

template<typename T>
void DoublyLinkedLists<T>::remove(int index) {

    int size = getSize();

    if(index < 0 || index >= size) {
        throw std::out_of_range("Indice invalido");
    }

    if(index == 0) {
        pop_front();
    }

    if(index == size - 1) {
        pop_back();
    }

    if(index > size / 2){
        Node<T> *curr = tail;
        for(int i = size - 1; i > index; i--) {
            curr = curr->prev;
        }
        Node<T> *temp = curr->prev;
        curr->prev = curr->prev->prev;
        curr->prev->next = curr;
        delete temp;
    } else{
        Node<T> *curr = head;

        for(int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        Node<T> *temp = curr->next;
        curr->next = curr->next->next;
        curr->next->prev = curr;
        delete temp;
    }
}

template<typename T>
T DoublyLinkedLists<T>::operator[](int index){

    int size = getSize();
    if(index < 0 || index >= size){
        throw std::out_of_range("Indice inválido");
    }

    if(index == 0){
        return front();
    }

    if(index == size - 1){
        return back();
    }

    if(index > size / 2){
        Node<T> *curr = tail;
        for(int i = size - 1; i > index; i--){
            curr = curr->prev;
        }
        return curr->val;
    } else {
        Node<T> *curr = head;
        for(int i = 0; i < index; i++){
            curr = curr->next;
        }
        return curr->val;
    }
}

template<typename T>
void DoublyLinkedLists<T>::reverse() {

    if(!head){
        throw std::out_of_range("Lista vacia");
    }

    Node<T> *curr = head;
    Node<T> *temp = nullptr;

    while(curr){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if(temp){
        head = temp->prev;
    }

    std::swap(head, tail);
}

template<typename T>
void DoublyLinkedLists<T>::show() {
    Node<T>* temp = head;

    while(temp){
        std::cout << temp->val << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}

template<typename T>
void DoublyLinkedLists<T>::clear() {
    while(head && tail && head != tail && head->next != tail) {

        Node<T> *temp1 = head;
        head = head->next;
        delete temp1;

        Node<T>* temp2 = tail;
        tail = tail->prev;
        delete temp2;
    }

    if(head == tail && head){
        delete head;
    }

    head = nullptr;
    tail = nullptr;
}

template<typename T>
DoublyLinkedLists<T>::~DoublyLinkedLists() {
    clear();
}

#endif // !SRC_DOUBLYLINKEDLISTS_TPP