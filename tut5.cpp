#include<iostream>
using namespace std;

// sum of two numbers by taking input from the user
int main()
{
    int a, b;
    cout<<"Enter the value of num1:\n";
    cin>>a; //">>" this is extraction operator
    cout<<"Enter the value of num2:\n";
    cin>>b; //">>" this is extraction operator
    int c;
    c=a+b;
    cout<<"The sum of two numbers: "<< a <<" and "<< b <<" is: "<<c<<endl;
    return 0;
}
