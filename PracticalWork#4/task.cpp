#include <iostream>

int main() {
    double a, b;

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

    switch (menu) {
        case 1:
            std::cout << "sum = " << a + b << '\n';
            break;
        case 2:
            std::cout << "difference = " << a - b << '\n';
            break;
        case 3:
            std::cout << "product = " << a * b << '\n';
            break;
        case 4:
            std::cout << "fraction = " << a / b << '\n';
            break;
        default:
            std::cout << "Not have this math function\n";
            break;
    }
    std::cout << '\n';
    return 0;
}