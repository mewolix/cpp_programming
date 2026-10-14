#include <iostream>

void user_swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int a = 1, b = 2;
    user_swap(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}
