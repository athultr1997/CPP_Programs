#include <iostream>

using namespace std;

class Complex
{
	private:
		int real;
		int complex;

	public:
		Complex(int r=0,int c=0)
		{
			real = r;
			complex = c;
		}

		Complex operator +(Complex const& obj)
		{
			Complex res;
			res.real = real + obj.real;
			res.complex = complex + obj.complex;

			return res;
		}

		void print()
		{
			cout<<real<<"+i"<<complex<<endl;
		}
};

class Complex_2
{
	private:
		int real;
		int complex;

	public:
		Complex_2(int r=0, int c=0)
		{
			real = r;
			complex = c;
		}

		friend Complex_2 operator +(Complex_2 const& obj1, Complex_2 const& obj2);

		void print()
		{
			cout<<real<<"+i"<<complex<<endl;
		}
};

Complex_2 operator +(Complex_2 const& obj1, Complex_2 const& obj2)
{
	return Complex_2(obj1.real+obj2.real,obj1.complex+obj2.complex);
}

int main(int argc, char const *argv[])
{
	Complex c1(2,4);
	Complex c2(4,5);
	Complex c3 = c1 + c2;
	c3.print();

	Complex_2 c4(4,5);
	Complex_2 c5(5,7);
	Complex_2 c6 = c4 + c5;
	c6.print();

	return 0;
}