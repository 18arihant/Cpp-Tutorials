#include<iostream>
using namespace std;

//overloading function

int sum(int a, int b)
{
    return a+b;
}

int sum(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout<<"The sum of two numbers 2 and 4 is: "<<sum(2,4)<<endl;// it is selecting the function on the basis of arguments we are passing
    cout<<"The sum of three numbers 2, 8 and 4 is: "<<sum(2,8,4)<<endl;
    return 0;
}