#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char str[50];
	cout<<"Enter the string:";
	gets(str);
	cout<<"The String is: ";
	puts(str);
	cout<<"Length of the string is ";
	cout<<strlen(str)<<endl;
	cout<<"Size of the string ";
		cout<<sizeof(str)<<" is bytes"<<endl;
	getch();
	return 0;
}
