#include<conio.h>
#include<iostream>
using namespace std;

class get
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"Enter the First Number:";
			cin>>a;
			cout<<"Enter the Second Number:";
			cin>>b;
		}
};
class cal: public get
{
	public:
		int *ptr1,*ptr2;
		void calculate()
		{
			ptr1=&a;
			ptr2=&b;
			*ptr1=*ptr1+*ptr2;
			*ptr2=*ptr1-*ptr2;
			*ptr1=*ptr1-*ptr2;
		}
	};
	class put: public cal
	{
		public:
			void putdata()
			{
				cout<<"After Swapping First Number="<<*ptr1<<"\nSecond Number="<<*ptr2<<endl;
			}
	};
int main()
{
	put obj;
	obj.getdata();
	obj.calculate();
	obj.putdata();
	getch();
	return 0;
}
