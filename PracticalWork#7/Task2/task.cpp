#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    const int size = 10;

    int array[size] = {};

    for (int i = 0; i < size; ++i) {
        array[i] = rand();
    }

    int minimum = array[0];
    int minIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i] < minimum) {
            minimum = array[i];
            minIndex = i;
        }
    }

    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "] = " << array[i] << '\n';
    }
    std::cout << "\nminimum[" << minIndex << "] = " << minimum << '\n';
    std::cout << '\n';
    return 0;
}