#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    float s,area;
    cout<<"Enter first side :- ";
    cin>>a;
    cout<<a<<" Enter second side :- ";
    cin>>b;
    cout<<"Enter third side :- ";
    cin>>c;
    s=float(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Perimeter of triangle is :- "<<a+b+c;
    cout<<"\nArea of triangle :- "<<area;
    return 0;
    
}
