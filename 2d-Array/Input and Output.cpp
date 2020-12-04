#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter size of column : ";
    int r,c;
    cin>>c;
    cout<<"Enter size of row : ";
    cin>>r;
    int arr[r][c];
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter "<<i<<j<<" element : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
