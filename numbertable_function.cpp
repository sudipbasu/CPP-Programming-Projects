#include<conio.h>
#include<iostream>
using namespace std;
void numbertable(int);

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    numbertable(n);
    getch();
    return 0;
}
void numbertable(int n)
{
    int i,m;
    for(i=1;i<=10;i++)
    {
        m=n*i;
        cout<<n<<"*"<<i<<"="<<m<<endl;
    }
}
