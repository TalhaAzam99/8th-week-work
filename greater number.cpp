#include<iostream>
using namespace std;
int num(int a, int b);
int main()
{
	int greater,a,b;
	cout<<" Enter any two numbers "<<endl;
	cin>>a>>b;
	greater=num(a,b);
	cout<<"The Greater Number is "<<greater<<endl;
	return 0;
}
int num(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}