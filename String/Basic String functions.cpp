#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    //append
    string str1="fam",str2="ily";
    str1.append(str2);
    cout<<str1<<endl;

    //clear
    str1.clear();
    cout<<"str1 = "<<str1<<endl;
   return 0;
}
