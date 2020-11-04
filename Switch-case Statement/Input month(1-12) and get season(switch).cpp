#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter any month(1-12) = ";
    int a;
    cin>>a;
    switch(a)
    {
        case 12:
        case 1:
        case 2:cout<<"Winter Season :)";
               break;
               
        case 3:
        case 4:
        case 5:cout<<"Sprinng Season :)";
              break;
        
        case 6:
        case 7:
        case 8:cout<<"Summer Season :)";
               break;
               
        default:cout<<"Autumn Season :)";
    }

    return 0;
}
