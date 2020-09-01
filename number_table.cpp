#include<iostream>
using namespace std;
class numbertable
{
	private:
	int i,n,m;
	public:
	void input()
	{
		cout<<"Enter the number which number table want to get:";
		cin>>n;
		}	
		void table()
		{
			for(i=1;i<=10;i++)
			{
				m=n*i;
				cout<<n<<"*"<<i<<"="<<m<<endl;
			}
		}
};
int main()
{
	numbertable obj;
	obj.input();
	obj.table();
	return 0;
}
