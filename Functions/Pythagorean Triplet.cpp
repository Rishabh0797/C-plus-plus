#include <iostream>
#include<algorithm>

using namespace std;

bool check(int a,int b,int c)
{
    int x,y,z;
    x=max(a,max(b,c));
    if(x==a)
    {
        if(b>c)
        {
            y=b;
            z=c;
        }
        else
        {
            y=c;
            z=b;
        }
        
    }
    else if(x==b)
    {
        if(a>c)
        {
            y=a;
            z=c;
        }
        else
        {
            y=c;
            z=a;
        }
    }
    else
    {
        if(a>b)
        {
            y=a;
            z=b;
        }
        else
        {
            y=b;
            z=a;
        }
    }
    if(x*x==(y*y)+(z*z))
    return true;
    else
    return false;
    
}

int main()
{
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    
   if(check(a,b,c))
   {
       cout<<"\t\nPythagorean Triplet";
   }
   else
   {
       cout<<"\t\nNot Pythagorean Triplet";
   }

    return 0;
}
