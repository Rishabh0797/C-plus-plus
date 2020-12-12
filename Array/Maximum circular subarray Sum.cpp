#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int kadane(int arr[],int n)
{
    int i,currSum=0,maxSum=INT_MIN;
    for(i=0;i<n;i++)
    {
        currSum+=arr[i];
        if(currSum<0)
        {
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"initialize array element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int nonwrap;
    nonwrap=kadane(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++)
    {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrap;
    wrap=totalSum+kadane(arr,n);
    cout<<max(nonwrap,wrap);
    return 0;
}
