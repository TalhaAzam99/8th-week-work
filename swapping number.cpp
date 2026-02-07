#include<iostream>
using namespace std;
int num(int& a, int& b);
int main()
{
	int a,b;
	cout<<" Enter any Two Numbers "<<endl;
	cin>>a>>b;
	cout<<" The Numbers Before Swapping "<<a<<" "<<b<<endl;
	num(a,b);
	cout<<" The Numbers After Swapping "<<a<<" "<<b;
	return 0;
}
int num(int& a, int& b)
{
	int temp=a;
	a=b;
	b=temp;
    return 0;
}
