#include<iostream>
#include<conio.h>
using namespace std;
class loop
{
	private:
		int i,n;
		public:
void input()
{
	cout<<"Enter the number:";
	cin>>n;
}
void calculate()
{
	cout<<"The number series is:"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<i<<"\t";
	}
	cout<<"\n";
}
void sum()
{
	int sum1=0;
	sum1=(n*(n+1)/2);
	cout<<"The Sum of the series is:"<<sum1<<endl;
}


};
int main()
{
	loop obj;
	obj.input();
	obj.calculate();
	obj.sum();
	getch();
	return 0;
}
