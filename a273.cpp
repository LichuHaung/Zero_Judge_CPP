#include<iostream>
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		if(k==0&&n!=0)
			{
				cout<<"Impossib1e!"<<endl;
			}
		else if(k==0&&n==0)
			{
				cout<<"Ok!"<<endl;
			}
		else if(n%k==0)
			{
				cout<<"Ok!"<<endl;
			}
		else if(n%k!=0)
			{
				cout<<"Impossib1e!"<<endl;
			}
	}
}
