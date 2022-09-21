#include <iostream>

int main() {
    int star;

    std::cout << "Enter star number: ";
    std::cin >> star;

    int end;

    std::cout << "Enter end number: ";
    std::cin >> end;
    std::cout << '\n';

    int sum = 0;
    int k = star - 1;

    while (end != k) {
        ++k;

        if (k % 2 != 0) {
            sum += k;
        }
    }
    std::cout << "Sum of odd numbers = " << sum << "\n\n";
    return 0;
}