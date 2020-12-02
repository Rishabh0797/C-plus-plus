#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    for(int i=0;i<n;i++)                    //1 2 2    subarray will be (1) (1,2) (1,2,2 )
    {                                       //                          (2) (2,2)
        sum=0;                              //                          (2)
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}
