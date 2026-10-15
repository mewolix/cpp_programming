#include <iostream>
#include <string>

template<typename T>
void user_swap(T& first, T& second) {
    T temp = first;
    first = second;
    second = temp;
}

int main() {
    int i = 1;
    double d = 2.2;
    user_swap(i, d);

    char c = 'a';
    user_swap(i, c);

    std::string s = "test";
    user_swap(c, s);

    return 0;
}

// Шаблонная функция с одним параметром типа требует, чтобы все аргументы, от которых выводится этот тип, были строго одинаковыми
