#include<iostream>
using namespace std;

int main()
{
    int marks[4]={23,67,34,98};

    // using for loop
    for(int i=0; i<4; i++)
    {
        cout<<marks[i]<<endl;
    }
    // updating the value of array
    marks[2]=76;
    cout<<marks[2]<<endl;

    // using while lop
    int i=0;
    while(i<4){
        cout<<"The marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }

    // using do while 
    // do{
    //     cout<<marks[i]<<endl;
    //     i++;
    //     }while(i<4);
    
    return 0;


}