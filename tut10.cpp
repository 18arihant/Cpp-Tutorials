#include<iostream>
#include<iomanip>
using namespace std;

// 2 types of manipulators(the make the code beautiful)
//1. endl
//2. setw()

int main()
{
    int a=2, b=45, c=788;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<setw(3)<<a<<endl;
    cout<<setw(3)<<b<<endl;
    cout<<setw(3)<<c<<endl;

    return 0;
}
