#include<iostream> //number swaping in C++ using class & pointer and without using 3rd variable
#include<conio.h>
using namespace std;
class swaping
{
public:
    int a,b,*ptr,*ptr1;
    void input()
    {
        cout<<"Enter the First number:";
        cin>>a;
        cout<<"Enter the Second number:";
        cin>>b;
    }
    void cal()
    {
        ptr=&a;
        ptr1=&b;
        *ptr=*ptr+*ptr1;
        *ptr1=*ptr-*ptr1;
        *ptr=*ptr-*ptr1;
    }
    void display()
    {
        cout<<"After Swappig two numbers are:\n";
        cout<<*ptr<<"\t"<<*ptr1<<endl;
    }
};
int main()
{
    swaping obj;
    obj.input();
    obj.cal();
    obj.display();
    getch();
    return 0;
}
