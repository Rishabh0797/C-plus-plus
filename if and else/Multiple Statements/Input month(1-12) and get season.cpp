#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter any month(1-12) = ";
    int a;
    cin>>a;
    if(a==12||a==1||a==2)
    {
        cout<<"Winter Season :)";
    }
    else if(a==3||a==4||a==5)
    {
        cout<<"Sprinng Season :)";
    }
    else if(a==6||a==7||a==8)
    {
        cout<<"Summer Season :)";
    }
    else
    {
        cout<<"Autumn Season :)";
    }

    return 0;
}
