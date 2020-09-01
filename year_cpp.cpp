#include<iostream> //implementation of Year program in C++
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<year<<" is leep year"<<endl;
	}
	else
	{
		cout<<year<<" is not leep year"<<endl;
	}
	getch();
	return 0;
}
