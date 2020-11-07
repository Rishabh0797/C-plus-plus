#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter number : ";
    int i,num,count=0;
    cin>>num;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            count=1;
        }
    }
    if(count==0)
    {
        cout<<num<<" is a Prime Number ";
    }
    else
    {
        cout<<num<<" is not a Prime NUmber ";
    }
    return 0;
}
