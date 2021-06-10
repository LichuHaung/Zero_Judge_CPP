#include<iostream>
using namespace std;
int main()
{
	int n,sum,i,a,b=0;
	while(cin>>n)
	{
		a=0;
		sum=0;
		int h[n];
		if(n==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			cin>>h[i];
			sum=sum+h[i];			
		}
	//	cout<<sum<<endl;
		sum=sum/n;
	//	cout<<sum<<endl;
		for(i=0;i<n;i++)
		{
			if(h[i]>sum)
			{
				a=a+h[i]-sum;
				
			}
		//	cout<<sum<<" "<<h[i] <<endl;
						
		}
		b++;
		cout<<"Set #"<<b<<endl;
		cout<<"The minimum number of moves is "<<a<<"."<<endl;
	} 
}
