#include<iostream> //Transpose of a matrix calculation in C++
#include<conio.h>
using namespace std;
int main()
{
    int arr[10][10],tran[10][10],i,j,n,n1;
    cout<<"Enter the number of Rows:";
    cin>>n;
    cout<<"Enter the number of Columns:";
    cin>>n1;
    cout<<"Enter the Elements in the Matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            cout<<"Enter the value for ["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {

            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    //transpose calculation
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {

            tran[j][i]=arr[i][j];
        }
    }
    cout<<"The Transpose of The Matrix:"<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<tran[i][j]<<"\t";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}
