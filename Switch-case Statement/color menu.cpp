#include <iostream>

using namespace std;

int main()
{
    cout<<"   Colour Menu :)\n"<<"'R' for RED \n"<<"'G' for GREEN \n"<<"'B' for BLUE \n";
    char a;
    cout<<"\n Enter your choice : ";
    cin>>a;
    switch(a)
    {
        case 'R':cout<<"     Roses are RED :)";
                 break;
        case 'G':cout<<"     Trees are GREEN :)";
                 break;
        case 'B':cout<<"     Sky is BLUE :)";
                 break;
        default:cout<<"     Invalid Option :( :(";
        
    }
    return 0;
}
