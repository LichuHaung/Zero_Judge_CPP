#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f,c;
	cin>>f;
	c= (f-32)*5/9;
	
	cout <<fixed<<setprecision(3)<<c;
	
} 
