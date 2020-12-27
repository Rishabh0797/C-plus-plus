#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number (0-990): ";
    cin>>n;
    int arr[1000]={0};
   for(int i=2;i<=n;i++)
   {
       arr[i]=i;
   }
   for(int i=2;i<sqrt(n);i++)
   {
       if(arr[i]==i)
       {
           for(int j=i*i;j<=n;j+=i)
           {
               if(arr[j]==j)
               {
                   arr[j]=i;
               }
           }
       }
   }
    while(n!=1)
    {
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }
    
   return 0;
}
