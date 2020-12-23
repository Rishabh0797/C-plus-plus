#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter position: ";
    int i;
    cin>>i;
    int temp;
    temp=1<<i;
    if(n&i!=0)
    {
        cout<<endl<<1;
    }
    else
    {
        cout<<endl<<0;
    }
    cout<<" is present at "<<i<<" position ";
   return 0;
}
