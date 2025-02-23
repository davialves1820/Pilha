#ifndef STACK_H
#define STACK_H

#include "node.h"

class stack {
    int tam;
    node* top;
public:
    stack();

    void set_top(node* t);
    node* get_top();

    int get_tam();

    void insert(int v);
    void remove();
    void print();

    ~stack();
};

#endif