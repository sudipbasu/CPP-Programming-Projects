#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int);

int main()
{
	int a,b;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter the Second number";
	cin>>b;
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int c=0;
	c=a+b;
	cout<<"Sum="<<c<<endl;

}
