#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[100][100],b[100][100],c[100][100],n,n1,i,j;
	cout<<"Enter the number of Rows:";
	cin>>n;
	cout<<"Enter the number of Columns:";
	cin>>n1;
	cout<<"Enter the elements in First Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			cout<<"Enter the value for ["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements in Second Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			cout<<"Enter the value for ["<<i<<"]["<<j<<"]:";
			cin>>b[i][j];
		}
	}
	cout<<"The Elements in First Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"The Elements in Second Matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	//Addition
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
		
	}
	cout<<"Addition:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
