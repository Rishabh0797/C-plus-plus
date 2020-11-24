#include <iostream>

using namespace std;

int main()
{
    int arr1[4]={10,20,30,40};
    int n,i;
    cout<<"Enter value of n : ";
    cin>>n;
    int arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<4;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
