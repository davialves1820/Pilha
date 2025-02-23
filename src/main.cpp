#include "stack.h"

int main(void) {

    stack s;
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.print();
    s.remove();
    s.print();
    cout << s.get_tam() << endl;

    return 0;
}