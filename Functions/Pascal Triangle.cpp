#include <iostream>
using namespace std;

int fact(int n)
{
    int i,factorial=1;
    for(i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
}
int main()
{
    int n;
    cout<<"Enter value for n : ";                          //1
    cin>>n;                                                //1 1
    for(int i=0;i<n;i++)                                   //1 2 1
    {                                                      //1 3 3 1
        for(int j=0;j<=i;j++)                              //1 4 6 4 1
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
