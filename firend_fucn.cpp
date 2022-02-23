#include <iostream>
using namespace std;

class Complex
{
	int a;
	int b;
	friend Complex sumComplex(Complex, Complex);

public:
	void setValue(int a, int b)
	{
		this->a = a;
		this->b = b;
	};
	void showValue()
	{
		cout << "Value is : " << a << " + " << b << "i" << endl;
	}
};
Complex sumComplex(Complex c1, Complex c2)
{
	Complex c3;
	c3.a = c1.a + c2.a;
	c3.b = c2.b + c2.b;
	return c3;
};

int main()
{
	Complex c1, c2, c3;
	c1.setValue(1, 4);
	c1.showValue();

	c2.setValue(4, 5);
	c2.showValue();

	c3 = sumComplex(c1, c2);
	c3.showValue();
	return 0;
}
