#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0,mx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx || i==0)
        {
            if(arr[i+1]<arr[i] || i==(n-1))
            {
                count++;
            }
        }
        
        mx=max(mx,arr[i]);
    }
    cout<<count;

    return 0;
}
