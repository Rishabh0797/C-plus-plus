#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter number of fibonacci character you want to print : ";
    int i,num;
    cin>>num;
    int a=0,b=1,c;
    for(i=1;i<=num;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}
