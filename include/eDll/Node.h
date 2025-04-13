#ifndef EDLL_NODE_H
#define EDLL_NODE_H

template<typename T>
struct Node {
  T val;
  Node *next;
  Node *prev;

  Node();
  explicit Node(T val);
};

#include "../../src/Node.tpp"
#endif // !EDLL_NODE_H
  

