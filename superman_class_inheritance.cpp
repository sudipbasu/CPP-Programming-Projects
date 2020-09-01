#include<conio.h>//Inheritance single level
#include<iostream>
using namespace std;
class superman{
	public:
		void smile()
		{
			cout<<"Smiling"<<endl;
		}
};
class superman1:public superman{
	public:
		void smiling()
		{
			cout<<"I am Smiling"<<endl;
		}
};
int main()

{
	superman1 s;
	s.smile();
	s.smiling();
	
	getch();
	return 0;
}
