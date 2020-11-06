#include <iostream>

using namespace std;

int main()
{
    cout<<"Average of Marks\n";
    int i,sum=0,n,mark;
    cout<<"Enter number of Subjects : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter number of "<<i<<" subject : ";
        cin>>mark;
        sum=sum+mark;
    }
    cout<<"\n Average of Marks : "<<sum/n;
    return 0;
}
