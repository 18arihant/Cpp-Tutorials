#include<iostream>
using namespace std;

int main()
{
    //if else if control statement
    int a;
    cout<<"Tell me your age:"<<endl;
    cin>>a;
    if (a>=18){
        cout<<"You are eligible to vote"<<endl;

    }
    else if(a<18){
        cout<<"you are not eligible to vote;"<<endl;
         
    }
    else{
        cout<<"go out"<<endl;
    }
    //switch control statement

    switch (a)
    {
    case 18:
        cout<<"you are 18 years of age"<<endl;
        break;

    case 22:
        cout<<"you are 22 years of age"<<endl;
        break;
    
    default:
    cout<<"special case"<<endl;
        break;
    }

    return 0;

}