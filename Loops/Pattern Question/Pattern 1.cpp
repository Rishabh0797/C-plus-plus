#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int n;
    cout<<"Enter value of n : ";//       12345
    cin>>n;                     //       12345
    for(i=1;i<=n;i++)           //       12345
    {                           //       12345....
        for(j=1;j<=5;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
