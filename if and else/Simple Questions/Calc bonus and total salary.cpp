#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter your Basic Salary :- ";
    float s,b;
    cin>>s;
    if(s>5000)
    {
        b=0.10*s;
    }
    else
    {
        b=0.05*s;
    }
    cout<<"Total Salary is = "<<s+b;
    return 0;
}
