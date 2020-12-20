#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;               //only take input before space
    cout<<str<<endl;
    
    string str1(5,'A');
    cout<<str1<<endl;
    
    string str2="Hello string";
    cout<<str2<<endl;
    
    string str3;
    getline(cin, str3);        //take input including space
    cout<<str3;
    return 0;
}
