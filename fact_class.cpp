#include<iostream> //implementation of factorial number using class
#include<conio.h>
using namespace std;
class fact
{
		private:
		int i,result=1,num
		;
	public:
		void input()
			{
				cout<<"Enter the number:";
				cin>>num;
			}
			void factorial()
			{
				for(i=1;i<=num;i++)
				{
					result=result*i;
				}
			}
			void display()
			{
				cout<<"Factorial="<<result<<endl;
			}
			
};
int main()
{
	fact obj;
	obj.input();
	obj.factorial();
	obj.display();
	getch();
	return 0;
}
