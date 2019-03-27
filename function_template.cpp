#include <iostream>

using namespace std;

template <typename data_type> data_type find_max(data_type x,data_type y)
{
	return (x>y)? x:y;
}

int main(int argc, char const *argv[])
{	
	cout<<find_max <int> (2,3)<<endl;
	cout<<find_max <double> (2.0,3.5)<<endl;
	cout<<find_max <char> ('a','b')<<endl;

	return 0;
}