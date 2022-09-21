#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << '\n';

    std::cout << "Choose number menu:\n"
                "Sum - 1;\n"
                "Difference - 2;\n"
                "Product - 3;\n"
                "Fraction - 4.\n\n";

    int menu;

    std::cout << "Menu: ";
    std::cin >> menu;
    std::cout << '\n';

    double sum = a + b;
    double difference = a - b;
    double product = a * b;
    double fraction = a / b;

    switch (menu) {
        case 1:
            std::cout << "sum = " << sum << '\n';
            break;
        case 2:
            std::cout << "difference = " << difference << '\n';
            break;
        case 3:
            std::cout << "product = " << product << '\n';
            break;
        case 4:
            std::cout << "fraction = " << fraction << '\n';
            break;
        default:
            std::cout << "Not have this math function\n";
            break;
    }
    std::cout << '\n';
    return 0;
}