#include "stack.h"

stack::stack() : tam(0), top(nullptr) {

}

void stack::set_top(node* t) {
    top = t;
}

node* stack::get_top() {
    return top;
}

int stack::get_tam() {
    return tam;
}

void stack::insert(int v) {
    node* novo = new node(v);
    
    novo->set_next(top);
    top = novo;
    tam++;
}

void stack::remove() {
    node* aux = top;
    top = top->get_next();
    delete aux;
    tam--;
}

void stack::print() {
    node* aux = top;
    while (aux != nullptr) {
        cout << aux->get_value() << " ";
        aux = aux->get_next();
    }
    cout << endl;
}

stack::~stack() {
    while (top != nullptr) {
        node* aux = top;
        top = top->get_next();
        delete aux;
    }
}