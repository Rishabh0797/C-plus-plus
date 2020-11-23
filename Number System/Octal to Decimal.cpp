#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,rem,sum=0,i=0;
    cout<<"Enter Octal number : ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*pow(8,i++);
        n/=10;
    }
    cout<<"Its Decimal Number form : "<<sum;
    return 0;
}
