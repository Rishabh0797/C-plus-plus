#include <iostream>

using namespace std;

int main()
{
    cout<<" Tables \n";
    cout<<"Enter number whose table you want to create : ";
    int i,num;
    cin>>num;
    for(i=1;i<=10;i++)
    {
         cout<<"\n";
         cout<<num<<" * "<<i<<" = "<<num*i;
    }
    return 0;
}
