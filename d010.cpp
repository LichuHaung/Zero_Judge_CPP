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
			cout<<"�ռ�"<<endl;
		}
		else if(S<N)
		{
			cout<<"����"<<endl;
		}
		else
		{
			cout<<"������"<<endl;
		}
	}
}
