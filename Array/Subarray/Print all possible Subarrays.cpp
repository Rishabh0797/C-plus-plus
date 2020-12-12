#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    for(int i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
           for(int k=i;k<=j;k++)
           {
               cout<<arr[k];
           }
            cout<<endl;
        }
    }
    return 0;
}
