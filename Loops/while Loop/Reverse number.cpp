#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int rem=0,num,sum=0;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num/=10;
    }
    cout<<"Reverse of a number is : "<<sum;

    return 0;
}
