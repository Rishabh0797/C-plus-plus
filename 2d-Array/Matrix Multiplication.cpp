#include <iostream>

using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter row and column of 1 matrix: ";
    cin>>r1>>c1;
    cout<<"Enter row and column of 2 matrix: ";
    cin>>r2>>c2;
    if(r2!=c1)
    {
        cout<<"Column of 1 matrix should be equal to Row of 2 matrix ";
        return 0;
    }
    int arr1[r1][c1],arr2[r2][c2],ans[r1][c2];

    cout<<"Initialize array element of 1 matrix : ";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Initialize array element of 2 matrix : ";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            ans[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"After multiplying we get : \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
             cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
