#include<iostream>
using namespace std;
int main()
{
	long long n,m,i,a,b,c;
	while(cin>>n)
	{
		a=1;
		b=2;
		if(n==0)
		{
			cout<<0<<endl;
		}
		 else if(n==1)
		{
			cout<<1<<endl;
		}
		 else if(n==2)
		{
			cout<<2<<endl;
		}
		else
		{ 
			for(i=2;i<n;i++)
			{
				c=a+b;
				a=b;
				b=c;
			}
			cout<<c<<endl;
		} 
		
	}
} 
