#include <iostream>
#include <math.h>
using namespace std;

void fibo(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}


int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<endl;
    fibo(n);
    return 0;
}
