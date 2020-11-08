#include <iostream>

using namespace std;

int main()
{
    cout<<"  Fatorial Of Number ";
    cout<<"\nEnter a number : ";
    int num,i,fact=1;
    cin>>num;
    for(i=num;i>1;i--)
    {
        fact=fact*i;
    }
    cout<<"Factotial of a number : "<<fact;
    return 0;
}
