#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter lower limit of range : ";
    int a,b,i,j;
    cin>>a;
    cout<<"Enter upper limit of range : ";
    cin>>b;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        
        if(j==i)
        cout<<i<<" ";
    }
    return 0;
}
2
