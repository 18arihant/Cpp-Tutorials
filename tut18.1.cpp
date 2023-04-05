#include<iostream>
using namespace std;

float money_recieved(int money, float rate = 1.1)//default arguments
{
    return money * rate;
}

int main()
{
    int money;
    cout<<"Enter the amount:"<<endl;
    cin>>money;
    cout<<"Total amount "<<money_recieved(money)<<endl; //default argument is used
    cout<<"Total amount for vip "<<money_recieved(money,4.01)<<endl; //if the argument is given then it will overwrite it
    return 0;
}