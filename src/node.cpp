#include "node.h"

node::node(int v = 0) : value(v), next(nullptr) {

}

void node::set_next(node* n) {
    next = n;
}

node* node::get_next() {
    return next;
}

int node::get_value() {
    return value;
}

void node::set_value(int v) {
    value = v;
}