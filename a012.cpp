#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if (a>b)
		{
			c=a-b;
			cout<<c<<endl;
		}
		if (a==b)
		{			
			cout<<a-b<<endl;
		}
		if (a<b)
		{
			c=b-a;
			cout<<c<<endl;
		}
	}
		
}
