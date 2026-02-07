#include <iostream>
#include <cmath>
using namespace std;
int Perfect(int n);
int main() 
{
    int n;  
    cout<<"Enter the upper limit (e.g., 1000) to find perfect numbers: ";
    cin>>n;
    cout<<"Perfect numbers found up to "<<n<<" are:"<<endl;
	for(int num=1;num<=n;++num)
	{
        if(Perfect(num))
		{
            cout<<num<<endl;
        }
    }
    return 0;
}
int Perfect(int n) 
{
    int div=1; 
    for(int i=2;i*i<=n;++i)
	{
        if(n%i==0)
		{
            div+=i;
            int paired=n/i;
            if(i*i!=n)
			{
                div+=paired;
            }
        }
    }
    return div==n;
}
