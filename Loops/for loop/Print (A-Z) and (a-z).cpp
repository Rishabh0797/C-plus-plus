#include <iostream>

using namespace std;

int main()
{
    cout<<"  Print (A-Z) and (a-z) \n\n";
    char i;
    for(i=97;i<=122;i++)
    {
       cout<<i<<" ";
    }
    
    cout<<"\n";
    
    for(i=65;i<=90;i++)
    {
       cout<<i<<" ";
    }
    return 0;
}
