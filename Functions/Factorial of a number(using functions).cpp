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
    cout<<"Enter number whose factorial you want to find : ";
    int n,ans;
    cin>>n;
    
    ans=fact(n);
    cout<<endl<<ans;
    return 0;
}
