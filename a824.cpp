#include<iostream>
using namespace std;
int main ()
{
	int a,b,c,i,j=0;
	cin >>a>>b>>c;
	
		j=0;
	for (i=1;i<=c;i++)
	{
		if (i%a==0 || i%b==0)
		{
			j=j+i;
			cout<<j<< " ";
		}	 
	}
		if(j>26)
		{
			j=j%26;
				cout<<j<< " ";
		}	
		j=j+64;
		cout<<char(j)<<endl;
	
}
