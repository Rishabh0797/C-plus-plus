#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a character :- ";
    char a;
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        cout<<a<<" is a VOWEL :)";
    }
    else
    {
        cout<<a<<" is a Consonent :)";
    }

    return 0;
}
