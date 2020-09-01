#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[4]={0,1,0,1};
	int arr2[4]={0,1,0,1};
	int i,pr;
	cout<<"AND GATE implementation in C++\n";
	
	for(i=0;i<4;i++)
	{
		pr=arr1[i]*arr2[i];
		cout<<arr1[i]<<" AND "<<arr2[i]<<"="<<pr<<"\t\t";
	}
	getch();
	return 0;
}
