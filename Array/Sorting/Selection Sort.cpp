#include <iostream>
using namespace std;

void CreateArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void DisplayArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {`
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    CreateArray(arr,n);
    SelectionSort(arr,n);
    DisplayArray(arr,n);
    return 0;
}
