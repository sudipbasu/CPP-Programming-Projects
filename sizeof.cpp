#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	float b;
	double c;
	long d;
	char e[100];
	cout<<"integer allocates "<<sizeof(a)<<" Bytes of memory"<<endl;
	cout<<"float allocates "<<sizeof(b)<<" Bytes of memory"<<endl;
	cout<<"double allocates "<<sizeof(c)<<" Bytes of memory"<<endl;
	cout<<"long allocates "<<sizeof(d)<<" Bytes of memory"<<endl;
	cout<<"char e[100] allocates "<<sizeof(e)<<" Bytes of memory"<<endl;
	
	getch();
	return 0;
}
