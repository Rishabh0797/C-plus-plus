#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter value of n : ";
    int i,j,n;
    cin>>n;
    cout<<"\n\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
