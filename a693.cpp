#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,i,j,l,r;
	while(cin>>n>>m)
	{
		int f[n],sum[m];
		for(i=0;i<n;i++)
		{
			cin>>f[i];
		}
		
		for(j=0;j<m;j++)
		{
			sum[j]=0;
			cin>>l>>r;
			for(;l<=r;l++)
			{
				sum[j]+=f[l-1];
			}
		}
		for(j=0;j<m;j++)
		{
			cout<<sum[j]<<endl;
		}
	}
 } 
