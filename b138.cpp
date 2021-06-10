#include<iostream>
using namespace std;
int main()
{
	int a[10],b=0,h,i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cin>>h;
	h=h+30;
	for(i=0;i<10;i++)
	{
		if(h>=a[i])
		{
			b++;
	//		cout<<b<<endl;
	//		cout<<a[i]<<endl<<" h="<<h<<endl;;
		}
	}
	cout<<b<<endl;
	
}
