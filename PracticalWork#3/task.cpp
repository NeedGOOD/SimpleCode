#include <iostream>

int main() {
    int number;

    std::cout << "Enter number: ";
    std::cin >> number;
    std::cout << '\n';

    if (number % 2 == 0) {
        std::cout << "This is number even\n\n";
    } else {
        std::cout << "This is number not even\n\n";
    }
    return 0;
}