#include <iostream>
using namespace std;

//Recursion: function which is called by itself
//fibonacci series
// here iterative approach will be better as fib(3) is called again and again
// fib(5)
// fib(4) + fib(3)
// fib(3) +fib(2) + fib(2) + fib(1)
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return (fib(n-2) + fib (n-1));
    }
    
}

int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The fibonacci sequence at position  "<<a<<" is: "<<fib(a)<<endl;
    return 0;
    return 0;
}
   
