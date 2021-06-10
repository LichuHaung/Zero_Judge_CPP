#include<iostream>
using namespace std;
int main(){
	int n,m,a,b=0,c;
	cin>>n>>m;
	
	if (n>=2)
	{
	a=6+(m-1)*4;
	b=a*n-((n-1)*m);
	cout <<b; 
	}
	else
	{
		a=6+(m-1)*4;
		cout <<a; 
	}

	
	
} 
