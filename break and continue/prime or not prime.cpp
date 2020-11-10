#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int num,i;
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"Not Prime";
            break;
        }
    }
    if(i==num)
    cout<<"Prime";
    return 0;
}
