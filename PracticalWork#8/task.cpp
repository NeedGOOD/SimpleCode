#include <iostream>

int sum(float a, float b) {
    return a + b;
}

int main() {
    float c;

    float x = 5.5;
    float y = 10.6;
    
    c = sum(x, y);

    std::cout << "c = " << c << '\n';
    return 0;
}