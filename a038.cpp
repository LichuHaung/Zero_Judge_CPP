#include<iostream>
using namespace std;
int main()
{
	int a,i,j,b[10],c,d,e;
	while(cin>>a)
	{
		for(i=0;i<=10;++i)
		{	
			if(a%10==0)
			{
				a=a/10;
			}		
		}
		for(i=0;i<=10;++i)
		{
			b[i]=a%10;
			
		}
		for(j=0;j<=10;j++)
		{
				b[j]=a%10;
				a=a/10;	
				cout<<b[j];				
				if(a==0)
				{
				break;
				}
		}	
		cout<<endl;
	}
 } 
