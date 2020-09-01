#include<iostream>
using namespace std;
int main()
{
	int a,b,add,sub,mul;
	int remainder;
	float div;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	remainder=a%b;
	cout<<"Addition="<<add<<endl;
	cout<<"Substraction="<<sub<<endl;
	cout<<"Multiplication="<<mul<<endl;
	cout<<"Division="<<div<<endl;
	cout<<"Remainder="<<remainder<<endl;
	return 0;
}
