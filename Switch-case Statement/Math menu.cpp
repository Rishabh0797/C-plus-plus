#include <iostream>

using namespace std;

int main()
{
    int a,b,count;
    cout<<" Math MENU :) :)\n\n";
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"\n Enter 1 for Add, 2 for SUBTRACT : ";
    cin>>count;
    
    switch(count)
    {
        case 1 :cout<<"Add "<<a<<"+"<<b<<" = "<<a+b;
               break;
        case 2 :cout<<"SUB "<<a<<"-"<<b<<" = "<<a-b;
               break;   
        default :cout<<"Invalid Option :( :(";
    }

    return 0;
}
