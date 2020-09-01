#include<iostream>
#include<conio.h>
using namespace std;
class leapyear
{
	private:
		int year;
		public:
			void input()
			{
				cout<<"Enter the year:"<<endl;
				cin>>year;
			}
			void condition()
			{
				if(year%400==0)
				{
					cout<<year<<" is Leap Year"<<endl;
				}
				else if(year%4==0 && year%100!=0)
				{
					cout<<year<<" is Leap Year"<<endl;
				}
				else
				{
					cout<<year<<" is Leap not Year"<<endl;
				}
			}
};
int main()
{
	leapyear obj;
	obj.input();
	obj.condition();
	getch();
	return 0;
}
