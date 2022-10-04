#include <iostream>

void foo(int *a, int *b) {
    int time = *a;
    *a = *b;
    *b = time;
}

int main() {
    int a = 5;
    int b = 6;

    std::cout << "Before:\n"
              << "first a = " << a << '\n'
              << "first b = " << b << '\n';

    foo(&a, &b);
    
    std::cout << "\nAfter:\n"
              << "second a = " << a << '\n'
              << "second b = " << b << '\n';
    return 0;
}