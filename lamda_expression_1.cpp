#include <bits/stdc++.h> 
#include <time.h>

using namespace std;

auto generate_random_vector()
{
	srand(time(NULL));
	vector<int> vec;

	for(int i=0;i<10;i++)
	{
		vec.push_back((rand()%100)+1);
	}

	return vec;
} 

void print_vector(auto vec)
{
	for(auto i=vec.begin();i!=vec.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
}

int main() 
{		
	auto V1 = generate_random_vector();
	print_vector(V1);
	sort(V1.begin(),V1.end(),[](int a,int b){return a>b;});
	print_vector(V1);

	vector<int> even_vec;
	copy_if(V1.begin(),V1.end(),back_inserter(even_vec),[](int a){return !(a%2);});
	print_vector(even_vec);

	int sum = 0;
	for_each(V1.begin(),V1.end(),[&sum](int a)
	{
		sum+=a;
		return sum;
	});
	cout<<"sum="<<sum<<endl;

	auto V2 = generate_random_vector();
	vector<int> V3(10);
	transform(V1.begin(),V1.end(),V2.begin(),V3.begin(),[](int x,int y){return x+y;});
	print_vector(V3);

}