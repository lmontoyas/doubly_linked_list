#ifndef SRC_NODE_TPP
#define SRC_NODE_TPP

#include "eDll/Node.h"


template<typename T>
Node<T>::Node() {
    val = T();
    next = nullptr;
    prev = nullptr;
}

template<typename T>
Node<T>::Node(T val) {
    this->val = val;
    next = nullptr;
    prev = nullptr;
}

#endif // !SRC_NODE_TPP