#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"initialize array element : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of K : ";
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<"Present at the index : "<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"Not Found";
    return 0;
}
