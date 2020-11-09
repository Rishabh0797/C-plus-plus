#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter range 1 to : ";
    int i,num;
    cin>>num;
    int x=1,y=1;
    for(i=3;i<=num;i++)
    {
        if(i%2==0)
        x++;
        else
        y++;
    }
    cout<<"No. of even number "<<x<<" and odd number "<<y;

    return 0;
}
