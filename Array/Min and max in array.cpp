#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,minno,maxno;
    cout<<"Enter value of n : ";
    cin>>n;
    int arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        maxno=max(arr2[0],arr2[i]);
        minno=min(arr2[0],arr2[i]);
    }
    cout<<"Max in array : "<<maxno<<"\n Min in array : "<<minno;
    return 0;
}
