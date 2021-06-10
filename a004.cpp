#include<iostream>
#include <string> 
using namespace std;

int main(){
	int y,a,b;
	while(cin>> y)
	{
	if(y%400==0)
	{
		cout << "閏年 " <<endl;
	}
	else if (y%4==0 && y%100!=0)
	{
		cout << "閏年 " <<endl;
	}
	else
	{
		cout << "平年 " <<endl;
	}
	} 
	
} 
