#include<iostream>
#include <string> 
using namespace std;

int main(){
	int t,i,n,m,a;
	cin>>t;
	for(i=1;i<t;i++)
	{
		cin>>n>>m;
		n=n/3;
		m=m/3;
		a=n*m;
		cout<<a<<endl; 
	}
	
} 
