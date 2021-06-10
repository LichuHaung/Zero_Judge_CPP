#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long n ,k,j,i=0,sum=0;
	while(cin>>k)
	{
		if(k<0)
		{
			k=abs(k);
		}
		sum=0;
		while((sum-k)%2!=0||sum<k)
		{
			i++;
			
			sum+=i;
			
			cout<<"i= "<<i<<" sum="<<sum<<endl;
			
		}
		cout<<i<<endl;
	}
}
