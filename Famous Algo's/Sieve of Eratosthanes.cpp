#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Number (0-990): ";
    cin>>n;
    int arr[1000]={0};
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=1;
            }
        }
        
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }
    
   return 0;
}
