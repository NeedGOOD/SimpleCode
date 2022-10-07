#include <iostream>

template <typename T>
void Foo(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a;
    
    std::cout << "number first: ";
    std::cin >> a;
    
    int b;

    std::cout << "number second: ";
    std::cin >> b;
    std::cout << '\n';

    std::cout << "Before:\n"
              << "first a = " << a << '\n'
              << "first b = " << b << '\n';
    
    Foo(a, b);
    
    std::cout << "\nAfter:\n"
              << "second a = " << a << '\n'
              << "second b = " << b << '\n';
    return 0;
}