#include <iostream>

using namespace std;

int main()
{
    cout<<"Rectangle Pattern\n\n";
    int i,j,num;
    cout<<"Enter number of rows : ";//          ######
    cin>>num;                       //          ######
    for(i=1;i<=num;i++)             //          ######
    {                               //          ######
        for(j=1;j<=5;j++)           //          ######.....
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
