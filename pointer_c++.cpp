#include<iostream> //pointer implementation using c++ programming
#include<conio.h>
using namespace std;
int main()
{
	int a,*ptr;
	cout<<"Enter the number:"<<endl;
	cin>>a;
	ptr=&a;
	cout<<"The address of integer type variable which is in Hexadecimal form:-"<<ptr<<endl;
	cout<<"The value:-"<<*ptr<<endl;
	getch();
	return 0;
}
