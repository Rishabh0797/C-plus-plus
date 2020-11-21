#include <iostream>
using namespace std;


int add(int num1,int num2)
{
    return(num1+num2);
}


int main()
{
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"\nSum of these two number is : "<<add(a,b);
    return 0;
}
