#ifndef NODE_H
#define NODE_H

#include <iostream>

using std::cout;
using std::endl;

class node {
    int value;
    node* next;
public:
    node(int v);

    void set_value(int v);
    void set_next(node* n);

    int get_value();
    node* get_next();
};

#endif