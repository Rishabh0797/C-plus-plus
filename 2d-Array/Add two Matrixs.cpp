#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter rows : ";
    int r,c;
    cin>>r;
    cout<<"Enter coloumn : ";
    cin>>c;
    int arr[r][c],arr1[r][c];
    cout<<"Initialize 1 Array : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
     cout<<"Initialize 2 Array : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]+arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
