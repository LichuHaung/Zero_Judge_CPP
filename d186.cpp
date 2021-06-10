#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d,i;
	while(cin>>a>>b)
	{
		c=0; 
		for(;a<=b;a++)
		{
			for(i=0;i<=b;i++)
			{
				d=i*i;
				if(a==d)
				{
					c++;
				}
			}
		}
		if(a==10&&b==0)
		{
		break;
		} 
		cout<<c<<endl;
	}
 } 
