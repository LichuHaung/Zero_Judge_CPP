#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,sum=0,n,m;
	
	while(cin>>n>>m)
	{
		if(n&&m>=0)
		{
			for(i=0;i<m;i++)
			{				
		    	sum=n*(i+1)+i;
				if(sum>=m)
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		else
		{
			for(i=0;i>m;i--)
				{				
			    	sum=(n*(i-1)-i);
					if(sum>=m)
					{
						cout<<i+1<<endl;
						break;
					}
				}
		}	
	}
 } 
