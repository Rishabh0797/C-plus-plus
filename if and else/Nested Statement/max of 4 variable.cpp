#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter first num :- ";
    cin>>a;
    cout<<"Enter second num :- ";
    cin>>b;
    cout<<"Enter third num :- ";
    cin>>c;
    cout<<"Enter fourth num :- ";
    cin>>d;
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<"First number is the largest :)";
            }
            else
            {
                cout<<"Fourth number is the largest :)";
            }
        }
        else
        {
            if(c>d)
            {
                 cout<<"Third number is the largest :)";
            }
            else
            {
                 cout<<"Fourth number is the largest :)";
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                cout<<"Second number is the largest :)";
            }
            else
            {
                cout<<"Fourth number is the largest :)";
            }
        }
        else
        {
            if(c>d)
            {
                 cout<<"Third number is the largest :)";
            }
            else
            {
                 cout<<"Fourth number is the largest :)";
            }
        }
    }
    return 0;
}
