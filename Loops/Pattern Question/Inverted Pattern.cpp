#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter value of n : ";
    int n,i,j,count;
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        count=1;
        for(j=n-i;j>=0;j--)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
