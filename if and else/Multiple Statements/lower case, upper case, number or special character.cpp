#include <iostream>

using namespace std;

int main()
{
    char a=0;
    cout<<"Enter character :- ";
    cin>>a;
    if(a>=65 && a<=90)
    {
        cout<<"Upper Case ";
    }
    else if(a>=97 && a<=122)
    {
        cout<<"lower case";
    }
    else if(a>=48 && a<=57)
    {
        cout<<"it is a number";
    }
    else
    {
        cout<<"It is a special character ";
    }
   
    return 0;
}
