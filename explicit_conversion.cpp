#include <iostream>

using namespace std;

// class Complex
// {
// 	private:
// 		int real;
// 		int complex;
// 	public:
// 		Complex(int r=0, int c=0)
// 		{
// 			real = r;
// 			complex = c;
// 		}

// 		bool operator == (Complex rhs)
// 		{
// 			return (real==rhs.real && complex==rhs.complex)? true: false;
// 		}
// };

class Complex_2
{
	private:
		int real;
		int complex;
	public:
		explicit Complex_2(int r=0, int c=0)
		{
			real = r;
			complex = c;
		}

		bool operator == (Complex_2 rhs)
		{
			return (real==rhs.real && complex==rhs.complex)? true: false;
		}
};

int main(int argc, char const *argv[])
{
	// Complex C(2,0);

	// if(C==2)
	// {
	// 	cout<<"it's equal";
	// }
	// else
	// {
	// 	cout<<"it's not equal";
	// }

	Complex_2 C(2,0);

	if(C == (Complex_2)2)
	{
		cout<<"it's equal";
	}
	else
	{
		cout<<"it's not equal";
	}

	return 0;
}