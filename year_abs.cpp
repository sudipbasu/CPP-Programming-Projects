#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	year=abs(year);
	if(year%400==0)
	{
		cout<<year<<" is leap year"<<endl;
	}
	else if(year%4==0 && year%100!=0)
	{
		cout<<year<<" is leap year"<<endl;
	}
	else
	{
		cout<<year<<" is not leap year"<<endl;
	}
	getch();
	return 0;
}
