#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter first number :- ";
    int a,b;
    cin>>a;
    cout<<"Enter second number :- ";
    cin>>b;
    if(a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else
    {
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}
