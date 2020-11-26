#include <iostream>
#include<climits>
using namespace std;

void CreateArray(int arr[],int n)
{
    int i;
    cout<<"Initialize array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int BinarySearch(int arr[],int n)
{
    int num,mid,l=0,u=n-1;
    cout<<"Enter number to be searched : ";
    cin>>num;
    while(l<=u)
    {
        mid=(l+u)/2;
        
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(num>mid)
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Enter size of array : ";
    int n,i,ans;
    cin>>n;
    int arr[n];
    CreateArray(arr,n);
    ans=BinarySearch(arr,n);
    if(ans==-1)
    {
        cout<<"Not present :(:(";
    }
    else
    {
        cout<<"Present at index : "<<ans;
    }
    return 0;
}
