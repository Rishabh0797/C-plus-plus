#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    
    {
        for(j=i;j<n;j++)
        {
            int sum=0;
           for(int k=i;k<=j;k++)
           {
               sum+=arr[k];
           }
           mx=max(mx,sum);
        }
    }
    cout<<mx;
    return 0;
}
