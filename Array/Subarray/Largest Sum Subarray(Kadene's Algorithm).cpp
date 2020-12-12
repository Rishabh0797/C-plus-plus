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
    int currSum=arr[0];
    int maxSum=INT_MIN;
    for(i=1;i<n;i++)
    {
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0)
        {
            currSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}
