#include<iostream>
using namespace std;
int main()
{
	int N;
	while(cin>>N)
	{
		if(N<=10)
		{
			N=N*6;
			cout<<N<<endl;
		}
		else if(N>10&&N<=20)
		{
			N=(N-10)*2+60;
			cout<<N<<endl;
		}
		else if(N>20&&N<40)
		{
			N=(N-20)*1+80;
			cout<<N<<endl;
		}
		else if(N>=40)
		{
			N=100;
			cout<<N<<endl;
		}
	}
 } 
