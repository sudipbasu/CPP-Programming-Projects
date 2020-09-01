#include<iostream> //implementation of linear search using C++
#include<conio.h>
using namespace std;
int main()
{
	int arr[50],n,item,flag;
	int i;
	cout<<"Enter the number of Elements:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the value for ["<<i<<"]:";
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
		cout<<item<<" is present in the location "<<i+1<<endl;
	}
	else
	{
		cout<<item<<" is not present"<<endl;
	}
	
	getch()
	;
	return 0;
}
