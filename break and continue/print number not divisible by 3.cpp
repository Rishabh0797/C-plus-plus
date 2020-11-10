#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter range 1 to : ";
    int num,i;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%3==0)
        {
            continue;    //if 'i' is divisible by 3 then jumps to next iteration
        }
        cout<<i<<" ";
    }
    return 0;
}
