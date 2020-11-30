/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,i,j;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        int present=arr[i];
        j=i-1;
        while(arr[j]>present && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=present;
    }
    cout<<"Sorted arrau is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
