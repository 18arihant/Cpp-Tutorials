#include<iostream>
using namespace std;

int main()
{
    //Aritmetic operators
    int a=4, b=5;
    cout<<"The valure of a+b is"<<a+b<<endl;
    cout<<"The valure of a-b is"<<a-b<<endl;
    cout<<"The valure of a*b is"<<a*b<<endl; //it gives only integer value, so instead of giving 0.8 it gives 0.
    cout<<"The valure of a/b is"<<a/b<<endl;
    cout<<"The valure of a%b is"<<a%b<<endl;
    cout<<"The valure of a++b is"<<a++<<endl;// it will give value of a i.e 4 and and increment it by 1 and will store to a which is 5 . so a=5
    cout<<"The valure of a-- is"<<a--<<endl;// it will give 5 and will decreement the value of a by 1. so a=4
    cout<<"The valure of ++a is"<<++a<<endl;//first it will increement the value of a by 1 then it will print a=5
    cout<<"The valure of --a is"<<--a<<endl;//first it will decreement the value of a by 1 then it will print a=4
    cout<<endl;
    // comparison operators
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    cout<<endl;
    //logical operators
    cout<<"The value of this logical operation is"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical operation is"<<(!(a==b))<<endl;
    cout<<"The value of this logical operation is"<<((a==b) || (a<b))<<endl;
    return 0;
}
