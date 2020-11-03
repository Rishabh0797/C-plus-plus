#include <iostream>

using namespace std;

int main()
{
    cout<<" Area Menu :) :)\n";
    int a,l,b;
    float r;
    cout<<"Press 1 for AREA OF RECTANGLE\n\t2 for AREA of CIRCLE   ==>> ";
    cin>>a;
    switch(a)
    {
        case 1:cout<<"Enter Length = ";
               cin>>l;
               cout<<"Enter Breadth = ";
               cin>>b;
               cout<<"Area of Rectangle = "<<l*b;
               break;
        
        case 2:cout<<"Enter radius =";
               cin>>r;
               cout<<"Area of Rectangle = "<<3.14*r*r;
               break;
        
        default:cout<<"Invalid Option";       
    }

    return 0;
}

