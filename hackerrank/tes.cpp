#include<iostream>
using namespace std;

int main()
{
    string a[10]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    int n;
    cin>>n;
    if((n>=1) && (n<=9))
    {
        cout<<a[n-1];
    }
    else
    {
        cout<<a[9];
    }
    
    return 0;
    
}