#include<iostream>
using namespace std;
int main()
{
//	ios::sync_with_stdio(0);
//    cin.tie(0);
	int i,N,p,q,j,k,l;
	char n[4],a[4];
	while(cin>>n[0]>>n[1]>>n[2]>>n[3])
	{
		cin>>N;
		for(i=0;i<N;i++)
		{
			p=0;
			q=0;
			cin>>a[0]>>a[1]>>a[2]>>a[3];
			l=0;
			for(j=0;j<4;j++)
			{
				
				if(a[j]==n[j])
				{
					p++;
					a[j]=-1;
					n[j]=-1;
				//	cout<<" a[j]= "<<a[j]<<"n[j] = "<<n[j]<<endl;
					continue;
				}
				
				for(k=0;k<4;k++)
				{
				//	cout<<"k= "<<k<<"   "<<endl;
				if(a[k]!=-1||n[j]!=-1)
				{
					if(n[j]==a[k])
						{
						q++;
						continue;
					    }
					    	cout<<q<<" k="<<k<<"a[k]= "<<a[k]<<" j ="<<j<<"n[j]=  "<<n[j]<<endl;
				}					
					
				//
				}
			}
			cout<<p<<"A"<<q<<"B"<< '\n';
		}
		
	}

} 
