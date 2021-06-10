#include<iostream>
using namespace std;
int main()
{
	int S,i,j,a;
	int N;
	while(cin>>N)
	{
		S = 0;
		for(i=1;i<N;i++)
		{
			if(N%i==0)
			{
				S=S+i;
			}
		}
		if(S>N)
		{
			cout<<"盈數"<<endl;
		}
		else if(S<N)
		{
			cout<<"虧數"<<endl;
		}
		else
		{
			cout<<"完全數"<<endl;
		}
	}
}
