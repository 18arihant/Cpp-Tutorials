#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public :
       void setid(void){
        salary=122;
        cout<<"enter your id:"<<endl;
        cin>>id;
       }
       void getid(void){
        cout<<"the id of employee is"<<id<<endl;

       }

};

// if the size of employees increases the we strore it in array
int main()
{
    int n;
    cout<<"Enter the size of employees:"<<endl;
    cin>>n;
    employee fb[n];
    for (int i=1; i<(n+1); i++)
    {
        fb[i].setid();
        fb[i].getid();
        
    }


    return 0;
}