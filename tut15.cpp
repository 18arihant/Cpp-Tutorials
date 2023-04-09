#include<iostream>
using namespace std;

struct ep  //structure in c++
{
    int eid;
    float salary;

};

union money // for better memory management 
{
    int rice; // it will use only one rice or car or pounds
    char car;
    float pounds;
};
int main()
{
    struct ep arihant;
    arihant.eid = 1;
    arihant.salary = 120000000000;
    cout<<arihant.eid<<endl;
    cout<<arihant.salary<<endl;
    
    union money m1;
    m1.car = 'c';
    cout<<m1.car;

    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}