#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str;
	cout<<"Enter the character:";
	cin>>str;
    cout << "The uppercase version of \"" << str << "\" is " << endl;
	putchar(toupper(str));
    
    return 0;
}
