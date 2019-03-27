#include <iostream>

using namespace std;

template <typename data_type> class Array
{
	private:
		int size;
		data_type *ptr;

	public:
		void Print();
		Array(data_type *arr);
};

template <typename data_type> Array<data_type>::Array(data_type arr[])
{
	size = sizeof(arr)/sizeof(arr[0]);
	cout<<"size="<<size<<endl;
	ptr = arr;
}

template <typename data_type> void Array<data_type>::Print()
{
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
}

template <typename data_type_1, typename data_type_2> class Class_1
{
	private:
		data_type_1 x;
		data_type_2 y;
};

template <typename data_type_1, typename data_type_2=char> class Class_2
{
	private:
		data_type_1 x;
		data_type_2 y;
};

template <typename data_type_1, int max> class Class_3
{
	private:
		data_type_1 x;
};

int main(int argc, char const *argv[])
{
	int array_1[] = {1,2,3};
	Array<int> A(array_1);
	A.Print();

	char array_2[] = {'a','b','c'};
	Array<char> B(array_2);
	B.Print();

	Class_1<int,double> X;

	Class_2<int> Y;

	Class_3<int,40> Z;

	return 0;
}
