#include <iostream>
#include<algorithm>
#include<climits>
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
    int N=1e6+2;
    int ind[N];
    for(int i=0;i<N;i++)
    {
        ind[i]=-1;
    }
    int minidx=1e6+2;
    for(int i=0;i<n;i++)
    {
        if(ind[arr[i]]!=-1)
        {
            minidx=min(minidx,ind[arr[i]]);
        }
        else
        {
            ind[arr[i]]=i;
        }
        
    }
   cout<<"Minmum index of repeating element : "<<minidx;
    return 0;
}
