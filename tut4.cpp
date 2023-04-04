#include<iostream>
using namespace std;
//local and global variable can have same names
int glo=6; // global variable
void sum()
{
    cout<<glo<<endl; // it will print the value og gllobal variablr
}
int main()
{
    int glo=7; //local variable, local variable takes precedence over global
    glo=48; // value of local variable gets updated
    cout<<glo<<endl; // value of updated local will be printed
    sum(); // value of global will be printed
    return 0;

}