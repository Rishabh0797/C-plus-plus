#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter number of rows : ";
    int i,j,row,count=1;
    cin>>row;
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }

    return 0;
}
