#include<iostream>
using namespace std;

int main()
{
    float p,r,t;
    cout<<"Enter Principle amount :- ";
    cin>>p;
    cout<<"Enter Interest rate :- ";
    cin>>r;
    cout<<"Enter Time period :- ";
    cin>>t;
    cout<<"Simple Interest is = "<<(p*r*t)/100;
    return 0;
}
