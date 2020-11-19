#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int sum=0,rem=0,num,i=0;
    cout<<"Enter a Decimal number : ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        sum=sum+rem*pow(10,i++);
        num=num/2;
    }
    cout<<"\nBinary form is => "<<sum;
    return 0;
}
