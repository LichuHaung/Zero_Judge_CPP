#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,e;
	while(cin>>a>>b>>c)
	{
		if((pow(b,2)-4*a*c)>0)
		{
			d=(-b+sqrt((pow(b,2)-4*a*c)))/(2*a) ;
			e=(-b-sqrt((pow(b,2)-4*a*c)))/(2*a) ;
			cout<<"Two different roots x1="<<d<<" , x2="<<e<<endl;
		}
		else if ((pow(b,2)-4*a*c)==0)
		{
			d=(-b+sqrt((pow(b,2)-4*a*c)))/(2*a) ;
			cout<<"Two same roots x="<<d<<endl;
		}
		else
		{
			cout<<"No real root"<<endl;
		}
	}
 } 
