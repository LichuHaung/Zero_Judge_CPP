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
		cout<<a<<" 個餅乾，"<<b + max(d, e)<<" 盒巧克力，"<<c<<" 個蛋糕。"<<endl;
	}
	
 } 
