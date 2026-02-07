#include<iostream>
using namespace std;
int num(int a);
int main()
{
	int table,a;
	cout<<" Enter any number "<<endl;
	cin>>a;
	table=num(a);
}
int num(int a)
{
	int b;
	for(int b=1;b<=10;b++)
	{
		cout<<a<<"X"<<b<<"="<<a*b<<endl;
	}
	return a*b;
}
