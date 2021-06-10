#include<iostream>
using namespace std;
int main()
{
	int m,i,j;
	while(cin>>m)
	{	
	int a[m],sum[m],n[m][16]={0,5,8,8,2,3,5,2,9,4,1,1,7,6,4,7};
		for(i=0;i<m;i++)
		{
			sum[i]=0;
			cin>>a[i];
			for(j=1;j<a[i];j++)
			{
				sum[i]+=n[i][j];
			}
			
		}
		for(i=0;i<m;i++)
		{
			cout<<n[i][a[i]]<<" "<<sum[i]<<endl; 
		}
		
	
	}
}
