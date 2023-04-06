#include<iostream>
using namespace std;

//overloading function

float volume(float r, float h)// volume of cylinder
{
    return (3.14*r*r*h);
}

int volume(int a)// volumee of cube
{
    return (a*a*a);
}

int volume(int a, int b, int c)//volume of cuboid
{
    return (a*b*c);
}

int main()
{
    cout<<"The volume of cylinder having radius 2 and height 6.4: "<<volume(2,6.4)<<endl;
    cout<<"The volume of cuboid having lenght 2, breadth 5 and height as 6: "<<volume(2,5,6)<<endl;
    cout<<"The volume of cube having side of 5 is: "<<volume(5)<<endl;
    return 0;
}