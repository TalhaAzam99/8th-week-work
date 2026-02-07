#include <iostream>
#include <cmath>
using namespace std;
int num(int n);
int main() 
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int result=num(n);
    cout<<"The sum of the digits of "<<n<<" is: "<<result<<endl;
    return 0;
}
int num(int n) 
{   
    int sum=0;
    while(n>0) 
	{
        int last_digit=n%10;
        sum+=last_digit;
        n/=10;
    }
    return sum;
}