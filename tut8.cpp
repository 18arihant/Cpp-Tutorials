#include<iostream> // g++ tut8.cpp, .\a.exe
using namespace std;
int c=45;
int main()
{
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c = a + b; 
    cout<<"the sum is"<<c<<endl;
    cout<<"the global c is:"<<::c; //"::" this is scope resolution operator to print the value of global c.
    // reference variables
    float x =  67.99;
    float & y = x;
    cout<<x<<endl;
    cout<<y;

    //typecasting
    int u=7;
    cout<<float(u);

    return 0;



}
