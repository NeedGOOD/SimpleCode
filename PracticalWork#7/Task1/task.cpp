#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    const int size = 10;

    int array[size] = {};

    for (int i = 0; i < size; ++i) {

        int number = 0;

        while (true) {
            number = rand() % 20;
            
            bool located = false;

            for (int j = 0; j < i; ++j) {
                if (array[j] == number) {
                    located = true;
                }
            }

            if (located == false) {
                break;
            }
        }
        array[i] = number;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << "array[" << i << "] = " << array[i] << '\n';
    }
    std::cout << '\n';
    return 0;
}