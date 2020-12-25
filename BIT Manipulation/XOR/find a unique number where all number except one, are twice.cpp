#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,8,5,1,2,8};
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum^arr[i];
        cout<<sum<<" ";
    }
    cout<<endl<<sum;
   return 0;
}
