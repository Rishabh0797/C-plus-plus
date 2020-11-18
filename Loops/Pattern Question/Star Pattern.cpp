#include <iostream>

using namespace std;

int main()
{
    cout<<"\tStar Pattern\n\n";
    int i,j,a;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            cout<<"  ";
        }
       for(j=1;j<=i;j++)
       {
           cout<<"* ";
       }
       for(j=1;j<i;j++)
       {
           cout<<"* ";
       }
        cout<<endl;
    }
    a=0;
    for(i=4;i>0;i--)
    {
        for(j=4-i;j>0;j--)
        {
            cout<<"  ";
        }
        for(j=4-a;j>0;j--)
        {
            cout<<"* ";
        }
        for(j=3-a;j>0;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
        a++;
    }

    return 0;
}
