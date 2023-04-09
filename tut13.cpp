#include<iostream>
using namespace std;

int main()
{
    //what is a pointer
    // ---data type which holds the address of other data types.
    
    int a=3;
    int *b =&a;
     //&--- (address) of pointer
    cout<<"The address of a is: "<<b<<endl;// b has the address of a stored in memory
    cout<<"The address of a is: "<<&a<<endl;// we can use b or &a \
        
    //*--- dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    return 0;
}