#include<iostream>
using namespace std;
int main()
{
	int n,i,min,max,a,b,sum,c;
	double d,e,f;
	
	while(cin>>n)
	{
		c=0;
		f=n;
		int m[n];
		d=(f-2)/2;
		min=2147483647;
		max=0;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>m[i];
			

			if(max<m[i])
			{
				max=m[i];
				b=max;
			}
			if(min>m[i])
			{
				min=m[i];
				a=min;		
			}		
		}
		for(;a<=b;a++)
		{
			sum+=a;
		}
		a=min;
		e=min+max;
		if(n==2)
		{
			if(e==min*2+1)
			{
				cout<<min<<" "<<max<<" "<<"yes"<<endl;
			}
			else
			{
				cout<<min<<" "<<max<<" "<<"no"<<endl;
			}
		}
		else if (n==3)
		{
			if((sum-min-max)*3==sum)
			{
				cout<<min<<" "<<max<<" "<<"yes"<<endl;
			}
			else
			{
				cout<<min<<" "<<max<<" "<<"no"<<endl;
			}
		} 
		else
		{
		 	if(sum-e==e*d)
			{
			//	cout<<" sum= "<<sum<<"sum-e= "<<sum-e<<" e*1.5="<<e*1.5<<" "<<e<<" "<<  a<<"¡@"<<b<<endl;
				cout<<min<<" "<<max<<" "<<"yes"<<endl;			
			}
			else
			{
			//	cout<<" sum= "<<sum<<"sum-e= "<<sum-e<<" e*1.5="<<e*1.5<<" "<<e<<" "<<  a<<"¡@"<<b<<endl;
				cout<<min<<" "<<max<<" "<<"no"<<endl;
			}
		}
	}
}
