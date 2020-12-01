#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j,i,mx=INT64_MIN;
    cin>>n;
    int arr[n];
    cout<<"Initialize array element : ";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    cout<<"Enter value of i(i<=n) : ";
    cin>>i;
    for(j=0;j<n;j++)
    {
        if(j==i)
        break;
        mx=max(mx,arr[j]);
    }
     cout<<"Maximum number till i is : "<<mx;
    return 0;
}
