#include <iostream>

void Foo(char *word) {
    int k = 0;

    while (word[k] != '\0') {
        ++k;
    }
    std::cout << "k = " << k << '\n';
}

int main() {
    char *word = "Hello";

    Foo(word);
    return 0;
}