#include<conio.h> //Function Overloading Implementation in C++
#include<iostream>
using namespace std;
class add
{
	public:
		int a,b;
		float c,d;
		void addition(int a,int b)
		{
			cout<<"Integer Addition= "<<a+b<<endl;
		}
		void addition(float b,float c)
		{
			cout<<"Float Addition= "<<c+d<<endl;
		}
};
int main()
{
	add obj;
	cout<<"Enter the value of a:";
	cin>>obj.a;
	cout<<"Enter the value of b:";
	cin>>obj.b;
	obj.addition(obj.a,obj.b);
	cout<<"Enter the value of c:";
	cin>>obj.c;
	cout<<"Enter the value of d:";
	cin>>obj.d;
	obj.addition(obj.c,obj.d);
	getch();
	return 0;
}
