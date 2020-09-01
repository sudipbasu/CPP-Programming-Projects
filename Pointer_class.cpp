#include<iostream>
#include<conio.h>
using namespace std;
class pointer
{
	private:
	int a,*ptr;
	public:
		void input()
		{
			cout<<"Enter the number:";
			cin>>a;
		}
		void address()
		{
			ptr=&a;
		}
		void display()
		{
			cout<<"Address="<<ptr<<endl;
		}
};
int main()
{
pointer obj;
obj.input();
obj.address();
obj.display();
getch();
return 0;
}
