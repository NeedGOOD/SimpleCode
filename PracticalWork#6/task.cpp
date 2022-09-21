#include <iostream>

int main() {
    int rows;

    std::cout << "Enter rows: ";
    std::cin >> rows;

    while (rows < 2) {
        std::cout << "Enter rows: ";
        std::cin >> rows;
    }

    int columns;

    std::cout << "Enter columns: ";
    std::cin >> columns;

    while (columns < 2) {
        std::cout << "Enter columns: ";
        std::cin >> columns;
    }
    std::cout << '\n';

    for (int i = 0 ; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    return 0;
}