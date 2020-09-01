#include<iostream> //implementation of Matrix Addition using C++ with classes
#include<conio.h>
using namespace std;
class matrix_addition
{
	private:
		int a[100][100],b[100][100],c[100][100],j,i,n,n1;
		public:
			void row()
			{
				cout<<"Enter the number of Rows:";
				cin>>n;
			}
			void column()
			{
				cout<<"Enter the number of columns:";
				cin>>n1;
				
			}
			void input1()
				{
					cout<<"Enter the Elements in First Matrix:"<<endl;
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							cout<<"Enter the Element for ["<<i<<"]["<<j<<"]:";
							cin>>a[i][j];
						}
					}
				}
				void input2()
				{
					cout<<"Enter the Elements in Second Matrix:"<<endl;
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							cout<<"Enter the Element for ["<<i<<"]["<<j<<"]:";
							cin>>b[i][j];
						}
					}
				}
				
				void addition()
				{
					
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
						}
					}
				}
				void display1()
					{
						cout<<"The Elements in First Matrix:"<<endl;
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							cout<<a[i][j]<<"\t";
						}
						cout<<"\n";
					}
						cout<<"\n";	
					}
					void display2()
					{
						cout<<"The Elements in Second Matrix:"<<endl;
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							cout<<b[i][j]<<"\t";
						}
						cout<<"\n";
					}
						cout<<"\n";	
					}
					//Addition Display
					void add_display()
					{
						cout<<"First Matrix + Second Matrix:"<<endl;
					for(i=0;i<n;i++)
					{
						for(j=0;j<n1;j++)
						{
							cout<<c[i][j]<<"\t";
						}
						cout<<"\n";
					}
						cout<<"\n";	
					}
					
};
int main()
{
	matrix_addition obj;
	obj.row();
	obj.column();
	obj.input1();
	obj.input2();
	obj.addition();
	obj.display1();
	obj.display2();
	obj.add_display();
	getch();
	return 0;
}
