#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and column : ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Initialize array : ";                         //Rows and Column should be Sorted
    for(int i=0;i<r;i++)                                 //1  4  7  11
    {                                                    //2  5  8  12
        for(int j=0;j<c;j++)                             //3  6  9  16
        {                                                //10 13 14 17
            cin>>arr[i][j];
        }
    }
    int num;
    cout<<"Enter number you want to search : ";
    cin>>num;
    int n=0,m=c-1;
    bool ans=false;
    while(n<r && m>=0)
    {
        if(arr[n][m]==num)
        {
            ans=true;
        }
        if(arr[n][m]>num)
        {
            m--;
        }
        else
        {
            n++;
        }
        
    }
    if(ans==true)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
    return 0;
}
