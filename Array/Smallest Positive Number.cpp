#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j,mx=0;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
        mx=max(mx,arr[j]);
    }
    bool ck[mx+1];
    for(j=0;j<=mx;j++)
    {
        ck[j]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            ck[arr[i]]=true;
        }
    }
  for(j=0;j<=mx;j++)
    {
        if(ck[j+1]==false && ck[j+2]==true)
        {
            cout<<j+1;
            return 0;
        }
    }
    cout<<"No such case ";
    return 0;
}
