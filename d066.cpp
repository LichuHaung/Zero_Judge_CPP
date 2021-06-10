#include<iostream>
using namespace std;
int main()
{
	int hh,mm,a;
	while(cin>>hh>>mm)
	{
		a=hh*60+mm;
		if(a=>450&&a<1020)
		{
			cout<<"At School"<<endl;		
		}
		
		else
		{
			cout<<"Off School"<<endl;
		}
	}
}
