#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size for square matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Initialize array element : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Original Matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of a Matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
