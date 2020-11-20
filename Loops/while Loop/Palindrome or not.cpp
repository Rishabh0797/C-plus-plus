#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int rem=0,num,sum=0,temp;
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num/=10;
    }
    if(temp==sum)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
