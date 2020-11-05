#include <iostream>

using namespace std;

int main()
{
    int i,num=0;
    cout<<"Enter number of even number you want to print  : ";
    cin>>num;
    cout<<"\n";
    for(i=2;(i/2)<=num;i+=2)
    {
        cout<<i<<"\n";
    }
    return 0;
}
