#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first num :- ";
    cin>>a;
    cout<<"Enter second num :- ";
    cin>>b;
    cout<<"Enter third num :- ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"First number"<<" is largest  ";
        }
        else
        {
            cout<<"Third number"<<" is largest ";
        }
    }
    else
    {
        if(b>c)
        {
              cout<<"Second number"<<" is largest ";
        }
        else
        {
            cout<<"Third number"<<" is largest ";
        }
    }
    return 0;
}
