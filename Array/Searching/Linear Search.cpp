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

int LinearSearch(int arr[],int n)
{
    int num,i;
    cout<<"Enter number to be searched : ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
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
    ans=LinearSearch(arr,n);
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
