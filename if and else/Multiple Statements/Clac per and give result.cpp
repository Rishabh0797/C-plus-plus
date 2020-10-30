#include <iostream>

using namespace std;

int main()
{
    float eng,math,sci,per;
    cout<<"Enter Maths marks out of 100 :- ";
    cin>>math;
    cout<<"Enter English marks out of 100 :- ";
    cin>>eng;
    cout<<"Enter Science marks out of 100 :- ";
    cin>>sci;
    per=(math+sci+eng)/300;
    per*=100;
    if(per>=75)
    {
        cout<<"Congrats you got DiStinction :)";
    }
    else if(per>=60 && per<=74)
    {
        cout<<"Congrats you got 1 DIV :)";
    }
    else if(per>=50 && per<=59)
    {
        cout<<"Congrats you got 2 DIV :)";
    }
    else
    {
        cout<<"\nBetter luck next time";
    }
    return 0;
}
