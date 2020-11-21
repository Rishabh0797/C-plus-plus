#include <iostream>
#include <math.h>
using namespace std;


int IsPrime(int num1)
{
    int i,flag=0;
    for(i=2;i<=sqrt(num1);i++)
    {
        if(num1%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int a,b;
    cout<<"Enter Lower Limit : ";
    cin>>a;
    cout<<"Enter Upper Limit : ";
    cin>>b;
    int i,count=0;
    for(i=a;i<=b;i++)
    {
        if(IsPrime(i))
        {
           cout<<i<<endl;
           count=1;
        }
    }
    if(count==0)
    {
        cout<<"\nNo prime number exist :( :(";
    }
    return 0;
}
