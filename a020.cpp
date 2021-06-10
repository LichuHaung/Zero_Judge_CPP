#include<iostream>
using namespace std;
int main()
{
	int z,i,j,a=0,b=0,c=0,d=0,f=10;
	char x[10],k,y[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	while(cin>>k)
	{
		for(j=0;j<26;j++)
		{
			if(k<'I')
			{
				f++; 
			}
			
			else if (k<'O'&&k>'I')
			{
				f++;
			}
			
			else if (k<'W'&&k>'O')
			{
				f++;
			}
			
			else if (k<'Z'&&k>'W')
			{
				f++;
			}
			else if (k=='W')
			{
				f=32;
			}
			else if (k=='I')
			{
				f=34;
			} 
			else if (k=='Z')
			{
				f=33;
			}
			else if (k=='O')
			{
				f=35;
			}
			
		}
			cout<<f<<endl;
		
//		b=(a%10)*9+a/10;
//		cout<<"(a%10)= "<<(a%10)<<" a/10= "<<a/10<<"b= "<<b;
		
		for(i=0,d=8;d<0;i++,d--)
		{
			c+=x[i]*d;
			cout<<c<<" "<<b<<"x[i]== "<<x[i]<<"i="<<i<< "d= "<<d<<endl; 

		}
	////	c=c+b+x[9];
	//	cout<<c;
	}
 } 
