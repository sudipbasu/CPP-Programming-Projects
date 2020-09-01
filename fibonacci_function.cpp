#include<iostream>
#include<conio.h>
using namespace std;
void fibo(int);
int main()
{
	int n;
	cout<<"Enter the n terms:";
	cin>>n;
	fibo(n);
	getch();
	return 0;
}
void fibo(int n)
{
	int i,n1=0,n2=1,n3;
	cout<<"Fibonacci Number Series:"<<endl;
	cout<<n1<<"\t"<<n2<<"\t";
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		cout<<n3<<"\t";
		n1=n2;
		n2=n3;
	}
	
}
