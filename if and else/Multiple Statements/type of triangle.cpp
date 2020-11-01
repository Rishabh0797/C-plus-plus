#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter dimension of first side :- ";
    cin>>a;
    cout<<"Enter dimension of second side :- ";
    cin>>b;
    cout<<"Enter dimension of third side :- ";
    cin>>c;
    if(a==b&&b==c)
    {
        cout<<"Equilateral Triangle";
    }
    else if(a==b||b==c||c==a)
    {
        cout<<"Isosceles Triangle";
    }
    else 
    {
        cout<<"Scalene Triangle";
    }
    return 0;
}
