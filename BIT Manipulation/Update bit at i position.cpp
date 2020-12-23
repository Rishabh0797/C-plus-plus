#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter position: "<<endl;;
    int i;
    cin>>i;
    cout<<"Enter bit 1 or 0: "<<endl;
    int b;
    cin>>b;
    int temp,t2;
    temp=n&(~(1<<i));
     t2=temp|(b<<i);
     cout<<t2;
    return 0;
}
