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

void mixing(int arr1[],int arr2[],int arr3[],int n)
{
    int i,j,k;
    for(i=0,k=0,j=0;k<n*2;)
    {
        if(arr1[i]<arr2[j] && i<n)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr1[n],arr2[n],arr3[n*2];
    cout<<"Initialize first Array : ";
    CreateArray(arr1,n);
    cout<<"Initialize second Array : ";
    CreateArray(arr2,n);
    mixing(arr1,arr2,arr3,n);
    cout<<"Mixing 1 and 2 array in 3 in assending order : ";
    DisplayArray(arr3,n*2);
    return 0;
}
