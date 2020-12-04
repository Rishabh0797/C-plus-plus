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
    cout<<"Enter number you want to search : ";
    int num;
    bool count=false;
    cin>>num;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==num)
            count=true;
        }
    }
    if(count)
    {
        cout<<"Number is present :):)";
    }
    else
    {
        cout<<"Numbert not found :(:(";
    }
   
    return 0;
}
