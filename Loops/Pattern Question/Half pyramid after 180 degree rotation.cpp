#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter number of rows : ";
    int i,j,row;
    cin>>row;
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=i;j<row;j++)
        {
            cout<<"  ";
        }
        for(j=i;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
