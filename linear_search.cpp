#include<iostream> //implementation of linear search in c++
#include<conio.h>
using namespace std;
class linear
{

public:
    int arr[20],i,n,flag,item;
    void input()
    {
        cout<<"Enter the size:";
        cin>>n;
    }
    void cal()
    {
        for(i=0;i<n;i++)
        {
            cout<<"Enter the Element for ["<<i<<"]:";
            cin>>arr[i];
        }
        cout<<"Enter the Element to search:";
        cin>>item;
        for(i=0;i<n;i++)
        {
            if(arr[i]==item)
            {
                flag=1;
                break;
            }
        }
    }
    void output()
    {
        if(flag==1)
        {
            cout<<item<<" is found in the location "<<i+1<<endl;
        }
        else
        {
            cout<<item<<" is not found"<<endl;
        }
    }
};
int main()
{
    linear obj;
    obj.input();
    obj.cal();
    obj.output();
    getch();
    return 0;
}
