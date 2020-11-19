/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"\tZig-Zac Pattern\n\n";
    cout<<"Enter the value of n : ";
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%4==0)
            cout<<"* ";
            else if(i==2 && j%4==0)
            cout<<"* ";
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }

    return 0;
}
