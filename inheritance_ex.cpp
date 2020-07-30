/*
Write a C++ program to find out the student details using multiple inheritance.
Use the following information: Declare a base class student and define a function get () to
get the student details. Declare another class sports and define a function getsum ()
to read the sports mark. Then create the class statement derived from student and sports and define the function display () to find out the total and average.
*/

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
    public:
        string sname;
        int roll;
        int m1,m2,m3;
    void get()
    {

        cout<<"Enter the name:";
        cin>>sname;
        cout<<"Enter the roll:";
        cin>>roll;
        cout<<"Enter the marks in 3 subjects:";
        cin>>m1>>m2>>m3;
    }
};
class sports
{
public:
    int sm; //sm=sport marks
    void getsum()
    {

        cout<<"Enter the Sports Marks:";
        cin>>sm;
    }
};
class statement:public student,public sports
{
    public:
        int tot;
        float avg;
        void display()
        {

            cout<<"Name: "<<sname<<endl;
            cout<<"Roll Number: "<<roll<<endl;
            tot=m1+m2+m2+sm;
            avg=(tot/4);
            cout<<"Total Marks="<<tot<<endl;
            cout<<"Average Marks="<<avg<<endl;
        }

};
int main()
{
    statement obj;
    obj.get();
    obj.getsum();
    obj.display();

    getch();
    return 0;
}
