#include<iostream>
using namespace std;
//local and global variable can have same names
int glo=9; // global variable
void sum()
{
    cout<<glo<<endl; // it will print the value og gllobal variablr
}
int main()
{
    int glo=1; //local variable, local variable takes precedence over global
    glo=78; // value of local variable gets updated
    cout<<glo<<endl; // value of updated local will be printed
    sum(); // value of global will be printed
    return 0;

}