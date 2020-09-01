#include<iostream>
#include<conio.h>
using namespace std;
class one_dim_array
{
	private:
		int a[100],i,n,add=1;
		public:
			void element()
			{
				cout<<"Enter the number of Elements:";
				cin>>n;
			}
			void input()
			{
				for(i=0;i<n;i++)
				{
					cout<<"Enter the Element for "<<i<<":";
					cin>>a[i];
				}
			}
			void addition()
			{
				for(i=0;i<n;i++)
				{
					add=add+a[i];
				}
				cout<<"Addition="<<add<<endl;
			}
			void display()
			{
				cout<<"The Elements are:"<<endl;
				for(i=0;i<n;i++)
				{
					cout<<a[i]<<"\t";
				
				}
				cout<<"\n";
			}
};
int main()
{
	one_dim_array obj;
	obj.element();
	obj.input();
	obj.display();
	obj.addition();
	getch();
	return 0;
}
