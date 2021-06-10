#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	long long  n,a[20],i,b;
	while (cin>>n)
	{
		b=0;
		for(i=0;i<32;i++)
		{
			a[i]=n%2;
			n=n/2;
			b++;
				if(n==0||n==1)
			{
				break;
			}
		}
		if(n!=0)
		{
				cout<<n;
		}
	
		for(i==b;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
} 
