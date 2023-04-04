#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of numbers: "<<endl;
    cin>> n;
    int a[n];
    for(int i =0; i<n; i++)
    {
        int b;
        cout<<"enter a number"<<endl;
        cin>>b;
        a[i]=b;
    }
    for(int i= n-1; i>=0; i--)
    {
        cout<<a[i]<<' ';

    }


    
    


    
    return 0;

}