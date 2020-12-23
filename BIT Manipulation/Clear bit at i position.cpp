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
    int temp;
    temp=n&(~(1<<i));
    cout<<" After clear bit of "<<n<<" at position "<<i<<" the answer is: "<<temp;
    return 0;
}
