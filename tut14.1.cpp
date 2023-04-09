#include<iostream>
using namespace std;

// Arrays and pointers

int main()
{
    int marks[4]={1,2,3,4};
    int *p=marks;
    cout<<"the value of marks 0 "<<*(p)<<endl;
    cout<<"the value of marks 1 "<<*(p+1)<<endl;
    cout<<"the value of marks 2 "<<*(p+2)<<endl;
    cout<<"the value of marks 3 "<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    
    return 0;

}