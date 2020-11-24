#include <iostream>
#include <math.h>
using namespace std;

int BinaryToDecimal(int n)
{
    int rem,sum=0,i=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem*pow(2,i++);
        n/=10;
    }
    return sum;
}

int DecimalToBinary(int n)
{
    int rem,sum=0,i=0;
    while(n>0)
    {
        rem=n%2;
        sum+=rem*pow(10,i++);
        n/=2;
    }
    return sum;
}

int main()
{
    cout<<"\tSum of two Binary Numbers \n\n";
    int a,b,ans;
    cout<<"Enter first Binary number : ";
    cin>>a;
    cout<<"Enter second Binary number: ";
    cin>>b;
    ans=DecimalToBinary(BinaryToDecimal(a)+BinaryToDecimal(b));
    cout<<"Sum : "<<BinaryToDecimal(a)+BinaryToDecimal(b)<<"  ie. :  "<<ans;
    return 0;
}
