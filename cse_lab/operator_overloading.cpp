#include <iostream>
#include <string>

using namespace std;

class Complex
{
    int real;
    int img;

    friend Complex operator+(Complex, Complex);

public:
    Complex(){};
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    Complex c1(4, 5);

    c1.display();

    Complex c2(7, 8);

    c2.display();

    Complex c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}