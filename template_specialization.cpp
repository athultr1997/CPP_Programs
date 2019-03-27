#include <iostream>

using namespace std;

template <typename data_type> void function(data_type x)
{
	cout<<"Normal:"<<x<<endl;
}

template <> void function(int x)
{
	cout<<"Special:"<<x<<endl;
}

int main(int argc, char const *argv[])
{
	function<int> (3);
	function<double> (3.5);
	function<char> ('a');
	function(5);
	
	return 0;
}