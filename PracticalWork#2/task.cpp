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

    double sum = 0.0, product = 0.0, average = 0.0;

    sum = a + b + c;
    product = a * b * c;
    average = (a + b + c) / 3.0;

    std::cout << "sum = " << sum << '\n'
            << "product = " << product << '\n'
            << "average = " << average << "\n\n";
    
    return 0;
}