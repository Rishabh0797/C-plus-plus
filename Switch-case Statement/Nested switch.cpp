#include<iostream>
using namespace std;

int main()
{
    int a,b,l,w;
    float r;
    cout<<"Press   1 for RECTANGLE\n\t2 for CIRCLE";
    cout<<"\nEnter your choice = ";
    cin>>a;
    switch(a)
    {
        case 1:cout<<"\nEnter length = ";
               cin>>l;
               cout<<"Enter width = ";
               cin>>w;
               cout<<"Press   1 for Perimetre\n\t2 for Area ";
               cout<<"\nEnter your choice = ";
               cin>>b;
               switch(b)
               {
                  case 1:cout<<"perimetre = "<<2*(l+w);
                         break;
                  case 2:cout<<"area = "<<l*w;
                         break;
                  default :cout<<"Invalid Option";        
               }
               break;
               
        case 2:cout<<"Enter radius = ";
               cin>>r;
               cout<<"Press   1 for Circumfrence\n\t2 for Area  ";
               cout<<"\nEnter your choice = ";
               cin>>b;
               switch(b)
               {
                   case 1:cout<<"Circum = "<<2*3.14*r;
                          break;
                   case 2:cout<<"Area = "<<3.14*r*r;
                          break;
                   default :cout<<"Invalid Option";            
               }
               break;
               
        default:cout<<"Invalid Option";   
    }
}
