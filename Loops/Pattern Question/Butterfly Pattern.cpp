#include <iostream>

using namespace std;

int main()
{
    cout<<"\tButterfly Pattern :) :)\n";
    int i,j;
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for( ;j<=5;j++)
        {
            cout<<"    ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(i=1;i<=5;i++)
    {
        for(j=5-i;j>=0;j--)
        {
            cout<<"* ";
        }
        for(j=5-i;j<4;j++)
        {
            cout<<"    ";
        }
        for(j=5-i;j>=0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
