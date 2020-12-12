#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j,i;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    
    int arrSum[n];
    arrSum[0]=arr[0];
    for(i=1;i<n;i++)
    {
        arrSum[i]=arrSum[i-1]+arr[i];
    }
    
    int mx=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum=arrSum[j]-arrSum[i]+arr[i];
          
           mx=max(mx,sum);
        }
    }
    cout<<mx;
    return 0;
}
