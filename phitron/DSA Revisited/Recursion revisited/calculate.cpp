#include <iostream>

int main() {
    int n = 50;
    int a = 0, b = 1, c;
    std::cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
