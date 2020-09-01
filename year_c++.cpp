#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	if(year%400==0)
	{
		cout<<year<<" is Leap Year"<<endl;
		
	}
	else if(year%4==0 && year%100!=0)
	{
		cout<<year<<" is Leap Year"<<endl;
	}
	else
	{
		cout<<year<<" is not Leap Year"<<endl;
	}
}
