#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c= a+b;
    return c;
}

void swap(int a,int b)//this will not work
{
    int temp = a;
    a=b;
    b= temp;

}

//call by reference using pointers
void swappointer(int *a,int *b) //this will work
{
    int temp = *a;
    *a=*b;
    *b= temp;

}
//call by reference using c++ reference variables
void swappointervalue(int &a,int &b) //this will work
{
    int temp = a;
    a=b;
    b= temp;

}

int main()
{
    int a=4,b=5;
    cout<<"the sum of two number is :"<<sum(a,b)<<endl;
    // swap(a,b);
    // cout<<"The value of a is :"<<a<<"The value of b is:"<<b; //this will not swap
    // swappointer(&a,&b);
    // cout<<"The value of a is :"<<a<<"The value of b is:"<<b;// this will work
    swappointervalue(a,b);
    cout<<"The value of a is :"<<a<<"The value of b is:"<<b;// this will work



    return 0;
}