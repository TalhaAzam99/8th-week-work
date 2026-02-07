#include<iostream>
using namespace std;
int num(int a, int b, int c);
int main()
{
	int smaller,a,b,c;
	cout<<" Enter any three numbers "<<endl;
	cin>>a>>b>>c;
	smaller=num(a,b,c);
	cout<<"The Smaller Number is "<<smaller<<endl;
	return 0;
}
int num(int a, int b, int c)
{
	if(a<b&&a<c)
	{
		return a;
	}
	else if(b<a&&b<c)
	{
		return b;
	}
	else
	{
		return c;
	}
}