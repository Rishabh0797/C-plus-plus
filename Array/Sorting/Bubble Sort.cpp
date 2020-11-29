#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
            
        }
    }
}

int main()
{
    cout<<"Enter size of array : ";
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"\nInitialize array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
