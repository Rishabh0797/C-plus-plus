#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n,j=2;
    cin>>n;
    int arr[n];
    cout<<"Initialize array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int subarrL=2;
    int mx=2;
    while(j<n)
    {
        if(pd==(arr[j]-arr[j-1]))
        {
            subarrL++;
        }
        else
        {
            subarrL=2;
            pd=arr[j]-arr[j-1];
        }
        mx=max(subarrL,mx);
        j++;
    }
    cout<<"Maximum length : "<<mx;
    return 0;
}
