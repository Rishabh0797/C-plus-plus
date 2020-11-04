#include <iostream>

using namespace std;

int main()
{
    cout<<"  Calculator :) :)\n\n";
    float a,b;
    cout<<"Enter First num = ";
    cin>>a;
    cout<<"Enter Second num = ";
    cin>>b;
    char syb;
    cout<<"\n Enter Operation you want to perform [example :- '+', '-', '*', '/'] = ";
    cin>>syb;
    switch(syb)
    {
        case '+':cout<<a<<" + "<<b<<" = "<<a+b;
                 break;
        
        case '-':cout<<a<<" - "<<b<<" = "<<a-b;
                 break;
                 
        case '*':cout<<a<<" * "<<b<<" = "<<a*b;
                 break; 
                 
        case '/':cout<<a<<" / "<<b<<" = "<<a/b;
                 break;        
                 
        default :cout<<"Invalid operation ";         
    }

    return 0;
}
