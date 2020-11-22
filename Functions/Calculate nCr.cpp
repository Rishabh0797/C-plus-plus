#include <iostream>
using namespace std;

int fact(int n)
{
    int i,factorial=1;
    for(i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
}
int main()
{
    int n,ans,r;
    cout<<" Calculate nCr\n";
    cout<<"Enter value for n : ";
    cin>>n;                                 //nCr = n! / ((n-r)!*r!)
    cout<<"Enter value for r : ";
    cin>>r;
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<endl<<ans;
    return 0;
}
