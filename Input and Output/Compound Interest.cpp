#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,ci;
    int t;
    cout<<"Enter principle amount :- ";
    cin>>p;
    cout<<"Enter interest rate :- ";
    cin>>r;
    cout<<"Enter time period :- ";
    cin>>t;
    ci=p*pow((1+(r/100)),t);
    cout<<"Compound Interest = "<<ci;
    return 0;
}
