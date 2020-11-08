#include <iostream>

using namespace std;

int main()
{
    cout<<"  Sum of Factor of number ";
    cout<<"\nEnter a number : ";
    int num,i,sum=0;
    cin>>num;
    for(i=1;i<=num/2;i++)
    {
       if(num%i==0)
       sum=sum+i;
    }
    cout<<"Sum of Factor of number : "<<sum;
    return 0;
}
