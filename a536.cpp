#include<iostream>
using namespace std;
int main()
{
	int a/*e+f*/,c,
	e,f,i/*for*/,sum=0,x/*%*/,y/*"/"*/,N;
	while(cin>>N)
	{
		for(i=0;i<N;i++)
		{
			cin>>e>>f>>c;
			a=e+f;
			sum=0;
			while(a>=c) 
			{
				x=a%c;
				y=a/c;
				a=x+y;
				sum=sum+y;			
			}
			cout<<sum<<endl;
		}
	}
}
