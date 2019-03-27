#include <iostream>

using namespace std;

template <typename data_type> class SmartPtr
{
	private:
		data_type *ptr;

	public:
		SmartPtr(data_type *p = NULL)
		{
			ptr = p;
		}

		~SmartPtr()
		{
			delete(ptr);
		}

		data_type& operator * ()
		{
			return *ptr;
		}
};

int main()
{
	SmartPtr<int> ptr(new int());
	*ptr = 3;
	cout<<(*ptr)<<endl;
} 