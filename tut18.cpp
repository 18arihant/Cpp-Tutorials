#include<iostream>
using namespace std;

//inline function is use to decrease time of execution

inline int product(int a, int b)
{
    return a*b;
}


int main()
{
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>> num1;
    cout<<"Enter the second number"<<endl;
    cin>> num2;
    cout<<"product of two numbers "<<num1<<" and "<<num2<<" is :"<<product(num1, num2)<<endl;
    cout<<"product of two numbers "<<num1<<" and "<<num2<<" is :"<<product(num1, num2)<<endl;
    cout<<"product of two numbers "<<num1<<" and "<<num2<<" is :"<<product(num1, num2)<<endl;
    cout<<"product of two numbers "<<num1<<" and "<<num2<<" is :"<<product(num1, num2)<<endl;
    cout<<"product of two numbers "<<num1<<" and "<<num2<<" is :"<<product(num1, num2)<<endl;
    return 0;

}