#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[50],i,n,flag,item;
	cout<<"Enter the number of Elements:";
	cin>>n;
	cout<<"Enter the Elements in Array\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter the element for ["<<i<<"]:";
		cin>>arr[i];
	}
	cout<<"Enter the item to search:";
	cin>>item;
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<item<<" is found in the location no "<<i+1<<endl;
	}
	else
	{
		cout<<item<<" not found"<<endl;
	}
	getch();
	return 0;
}
