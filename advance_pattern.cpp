#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of Rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                cout<<"#";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\a"<<endl;
    }
    getch();
    return 0;
}
