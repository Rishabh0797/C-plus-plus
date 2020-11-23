#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,rem,sum=0,i=0;
    
    cout<<"Enter Decimal number : ";
    cin>>n;
    while(n>0)
    {
        rem=n%8;
        sum=sum*10+rem;
        n/=8;
    }
    while(sum>0)
    {
        rem=sum%10;
        n=n*10+rem;
        sum/=10;
    }
    cout<<"Its Octal Number form : "<<n;
    return 0;
}
