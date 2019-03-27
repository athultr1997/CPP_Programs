#include <bits/stdc++.h>

using namespace std;

class increment
{
	private:
		int num;

	public:
		increment(int n): num(n){}

		int operator () (int arr_num)
		{
			return num + arr_num;
		} 
};

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int to_add = 5;

	transform(arr,arr+n,arr,increment(to_add));

	for (int i=0; i<n; i++) 
        cout << arr[i] << " ";
	
	//operator overloading with ()
	increment inc(5);
	int x = inc(3);
	cout<<"x="<<x<<"\n";

	return 0;
}