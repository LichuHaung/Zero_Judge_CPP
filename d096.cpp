#include<iostream>

using namespace std;
int main(){
	int i,j,k=-1,l,n,m,o;
	cin>>n;
		for (i =1; i <10; i=i+2)
    {
       	o=o+1;
        for (j = 1; j<i-1; j++)
        {
            k=k+2;
			l=k; 
			m++;
			  			               
        } 
        if((o)/2==n)          
			cout<<m<<" ";
	     cout<<endl;                             
    }
		
} 
