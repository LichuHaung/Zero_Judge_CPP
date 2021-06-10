#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,i,j;//e==®t;f=fifth 
	cin>>j;
	for(i=0;i<j;i++)
	{
		cin>>a>>b>>c>>d;
		if(d-c==c-b)
		{
			e=d-c;
			f=d+e;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<f<<endl;
		}
		else if(d/c==c/b)
		{
			e=d/c;
			f=d*e;
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<f<<endl;
		}
	}
}
