#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int sum=0,rem=0,num,i=0;
    cout<<"Enter a Binary number(eg.101010..) = ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*pow(2,i++);
        num=num/10;
    }
    cout<<"\nDecimal form is => "<<sum;
    return 0;
}
