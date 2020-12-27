#include <iostream>

using namespace std;

int main()
{
    int num,i;
    cout<<"Enter number: ";
    cin>>num;
    if((num&1)==1)
    {
        cout<<"Least significant bit is set";
    }
    else
    {
         cout<<"Least significant bit not is set";
    }
    
   return 0;
}
