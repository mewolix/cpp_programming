#ifndef QUARTER_H
#define QUARTER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Quarter {
private:
    float w, x, y, z;

public:
    // constructors
    Quarter();
    Quarter(float w);
    Quarter(float w, float x);
    Quarter(float x, float y, float z); // imaginary
    Quarter(float w, float x, float y, float z);

    Quarter(const Quarter& other);
    Quarter& operator=(const Quarter& other);

    // getters
    float get_W() const { return w; }
    float get_X() const { return x; }
    float get_Y() const { return y; }
    float get_Z() const { return z; }

    // methods
    void print_Quarter() const;
    float get_Modulus() const;
    Quarter get_Conjugate() const;
    Quarter get_Inverse() const;
    Quarter multiply_ByScalar(float scalar) const;

    // operators
    Quarter operator+(const Quarter& q) const;
    Quarter operator-(const Quarter& q) const;
    Quarter operator*(const Quarter& q) const;
    Quarter operator/(const Quarter& q) const;
    bool operator==(const Quarter& q) const;

    friend std::ostream& operator<<(std::ostream& os, const Quarter& q);
    friend std::istream& operator>>(std::istream& is, Quarter& q);

    // scalar mult
    friend Quarter operator*(const Quarter& q, float scalar);
    friend Quarter operator*(float scalar, const Quarter& q);

    // power 
    friend Quarter calculate_Power(const Quarter& base, int exp);

    // file reading
    static void read_FromFile(const std::string& filename, Quarter& q1, Quarter& q2);
};

#endif
