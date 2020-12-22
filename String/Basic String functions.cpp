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

    //clear and empty
    str1.clear();
    if(str1.empty())
    cout<<"str1 is empty"<<str1<<endl;
    
    //compare
    str1="abc";
    str2="xyz";
    cout<<str2.compare(str1)<<endl;   //if it give +value then it means str2 > str1
    str2=str1;
    if(!str2.compare(str1))               //give 0 if both equal
    {
        cout<<"str2 and str1 are equal :)"<<endl;
    }
    
    //find
    string s1="I love coding";
    cout<<s1.find("Love")<<endl;   //it return index value if found else return garbage value
    
    //insert
    s1.insert(s1.length(), " very much");
    cout<<s1<<endl;
    
    //substr
    cout<<s1.substr(0, 5)<<endl;
   return 0;
}
