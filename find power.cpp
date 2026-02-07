#include<iostream>
#include<cmath>
using namespace std;
double num(int a, int b);
int main()
{
	int result,a,b;
	cout<<" Enter any Two Parameters "<<endl;
	cin>>a>>b;
	result= num(a,b);
	cout<<" The power of "<<a<<"^"<<b<<" ="<<result;
}
double num(int a, int b)
{
	return pow(a,b);
}
