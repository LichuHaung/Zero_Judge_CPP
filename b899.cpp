#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,a,b,c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=pow((x1-x2),2)+pow((y1-y2),2);
		b=pow((x2-x3),2)+pow((y2-y3),2);
		c=pow((x3-x1),2)+pow((y3-y1),2);
		if(max(max(a,b), c)==a)
		{
			x1=x1+x2-x3;
			y1=y1+y2-y3;
			cout<<x1<<" "<<y1<<endl;
		}
		else if(max(max(a,b), c)==b)
		{
			x1=x2+x3-x1;
			y1=y2+y3-y1;
			cout<<x1<<" "<<y1<<endl;
		}
		else
		{
			x1=x3+x1-x2;
			y1=y3+y1-y2;
			cout<<x1<<" "<<y1<<endl;
		}
	
}
