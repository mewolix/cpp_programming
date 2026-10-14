#include <iostream>

class Shape {
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

class Rectangular : public Shape {
    double a;
    double b;
public:
    Rectangular(double a = 1, double b = 1) : a(a), b(b) {}
    double square() override {
        return a * b;
    }
    double perimeter() override {
        return 2 * (a + b);
    }
};

class Circle : public Shape {
    double r;
public:
    Circle(double r = 1) : r(r) {}
    double square() override {
        return 3.14159 * r * r;
    }
    double perimeter() override {
        return 2 * 3.14159 * r;
    }
};

class Square : public Rectangular {
public:
    Square(double a = 1) : Rectangular(a, a) {}
};

int main() {
    Rectangular r(2, 3);
    Circle c(5);
    Square s(4);
    
    std::cout << r.square() << " " << r.perimeter() << std::endl;
    std::cout << c.square() << " " << c.perimeter() << std::endl;
    std::cout << s.square() << " " << s.perimeter() << std::endl;
    
    return 0;
}
