#include <iostream>
#include <string>

template<typename T>
void user_swap(T& first, T& second) {
    T temp = first;
    first = second;
    second = temp;
}

int main() {
    double d1 = 1.1, d2 = 2.2;
    user_swap<double>(d1, d2);
    std::cout << d1 << " " << d2 << std::endl;

    std::string s1 = "meow", s2 = "gaf";
    user_swap<std::string>(s1, s2);
    std::cout << s1 << " " << s2 << std::endl;
    return 0;
}
