#include<iostream>
using namespace std;
int main()
{
	long long a,b=0,c,d,e;
	while (cin>>a>>b>>c)
	{
		d=a/10;
		e=c/2;
//		if (d>e)
//		{
//			b=b+e;
//		}
//		else if (d=e)
//		{
//			b=b+e;
//		}
//		else if (d<e)
//		{
//			b=b+d;
//		}
		cout<<a<<" �ӻ氮�A"<<b + max(d, e)<<" �����J�O�A"<<c<<" �ӳJ�|�C"<<endl;
	}
	
 } 
