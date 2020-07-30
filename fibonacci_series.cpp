#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i,size;
    cout<<"Enter the Size:";
    cin>>size;
    cout<<"Fibonacci Series:"<<endl;
    cout<<n1<<"\t"<<n2<<"\t";
    for(i=3;i<=size;i++)
    {
        n3=n1+n2;
        cout<<n3<<"\t";
        n1=n2;
        n2=n3;
    }
    return 0;
}
