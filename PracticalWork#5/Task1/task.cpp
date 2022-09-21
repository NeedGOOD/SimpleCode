#include <iostream>

int main() {
    char symbol;

    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    std::cout << '\n';

    int number;

    std::cout << "Enter number symbol: ";
    std::cin >> number;
    std::cout << '\n';

    std::cout << "Choose number menu:\n"
                "Vertically - 1\n"
                "Horizontally - 2\n\n";

    int menu;

    std::cout << "Menu: ";
    std::cin >> menu;

    while (menu < 1 || menu > 2) {
        std::cout << "There is no such function\n\n";

        std::cout << "Menu: ";
        std::cin >> menu;
    }
    std::cout << '\n';

    int k = 0;

    switch (menu) {
        case 1:
            while (number != k) {
                std::cout << symbol << '\n';
                ++k;
            }
            break;
        case 2:
            while (number != k) {
                std::cout << symbol;
                ++k;
            }
            std::cout << '\n';
            break;
    }
    std::cout << '\n';
    return 0;
}