#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,sum=1,i,n,j,a[10],b,l;
		
	while(cin>>t)
	{
		for(i=0;i<t;i++)
		{
			cin>>n;
			sum=1;
			for(j=0;j<10;++j)
			{	
				if(n>10)
				{
					a[j]=n%10; 
					n=n/10;	
					sum=sum*a[j];		
				}
				else
				{
					sum=sum*n;	
					cout<<sum<<endl;		
					break;
				}									
			}	 
		}
		
	}
}
