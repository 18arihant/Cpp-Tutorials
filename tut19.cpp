#include <iostream>
using namespace std;

//factorial of a number
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
       fact= fact *i;
    }
    return fact;
}

int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is: "<<factorial(a)<<endl;
    return 0;

}
