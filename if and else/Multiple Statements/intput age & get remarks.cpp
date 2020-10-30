#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age :- ";
    cin>>age;
    if(age<=12)
    {
        cout<<" CHILD :)";
    }
    else if(age>=13 && age<=19)
    {
        cout<<"TeenAger :)";
    }
    else if(age>=20 && age<=50)
    {
        cout<<"MATURE :)";
    }
    else
    {
        cout<<"OLD :)";
    }
    return 0;
}
