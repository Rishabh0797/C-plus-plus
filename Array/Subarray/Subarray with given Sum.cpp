#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j,i,sum,S;
    cin>>n;
    int arr[n];
    cout<<"Enter value of S : ";
    cin>>S;
    cout<<"Initialize array : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    
   for(i=0;i<n;i++)
   {
       sum=0;
       for(j=i;j<n;j++)
       {
           sum+=arr[j];
           if(sum==S)
           {
               cout<<i<<" "<<j;                         //tell starting and ending index of subarray
           }
       }
       cout<<endl;
   }
    return 0;
}
