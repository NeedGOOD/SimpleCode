#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    std::cout << '\n';

    std::cout << "sum = " << a + b + c << '\n'
            << "product = " << a * b * c << '\n'
            << "average = " << (a + b + c) / 3.0 << "\n\n";
    return 0;
}