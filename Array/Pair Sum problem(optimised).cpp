#include <iostream>
using namespace std;

void Sorting(int arr[],int n)
{
    int curr,j;
    for(int i=1;i<n;i++)
    {
        curr=arr[i];
        j=i-1;
        while(arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Initialize your array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Sorting(arr,n);
    cout<<"Enter value of k : ";
    int i=0,j=n-1,k;
    cin>>k;
    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            cout<<"Index are : "<<i<<" "<<j;
            return 0;
        }
        if(arr[i]+arr[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
        
    }
    cout<<"Not Found :( ";
    return 0;
}
