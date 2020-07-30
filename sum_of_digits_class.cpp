#include<iostream>
#include<conio.h>
using namespace std;
class sumdigit
{
public:
    int n,m,sum=0;
    void input()
    {
        cout<<"Enter the number:";
        cin>>n;
    }
    void cal()
    {
        while(n>0)
        {
            m=n%10;
            sum=sum+m;
            n=n/10;
        }
    }
    void output()
    {
        cout<<"Sum of Digits:"<<sum<<endl;
    }
};

int main()
{
    sumdigit obj;
    obj.input();
    obj.cal();
    obj.output();
    getch();
    return 0;
}
