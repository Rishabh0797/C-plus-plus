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
    cout<<"Initialize array : ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int row_start=0,row_end=(r-1),col_start=0,col_end=(c-1);
     
    while(row_start <= row_end && col_start<=col_end)
    {
        //first row
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
         row_start++;

         //last column
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;

        //last row
        for(int i=col_end;i>=col_start;i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //first col
        for(int i=row_end;i>=row_start;i--)
        {
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}
