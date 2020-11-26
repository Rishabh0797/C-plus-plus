#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,i,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i+=2)
    {
        if(i==(n-1))
        {
            break;
        }
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
