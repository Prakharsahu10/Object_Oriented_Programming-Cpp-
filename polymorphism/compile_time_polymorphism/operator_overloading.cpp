// operator_overloading.cpp
// Minimal example showing operator+ overloaded for a Complex class

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    // Set real and imaginary parts
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Display complex number
    void showData() const { cout << real << "+" << imag << "i" << endl; }

    // Overload + to add two Complex objects
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, sum;
    c1.setData(3, 4); // 3+4i
    c2.setData(1, 2); // 1+2i
    sum = c1 + c2;    // uses operator+
    sum.showData();   // prints 4+6i
    return 0;
}
