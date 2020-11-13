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
        for(j=1;j<=4;j++)
        {
            if(i==1||i==row||j==1||j==4)
            {
               cout<<"* "; 
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
