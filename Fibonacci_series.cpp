#include<iostream> //Fibonacci number series
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,n3,i,n;
	n1=0;
	n2=1;
	
	cout<<"Enter the number of Elements:";
	cin>>n;
	cout<<"Fibonacci Number Series:"<<endl;
	cout<<n1<<"\t"<<n2<<"\t";
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		cout<<n3<<"\t";
		n1=n2;
		n2=n3;
		
	}
	getch();
	return 0;
}
