#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"Enter your numeric string : ";
    getline(cin, s);
    sort(s.begin(),s.end());
    cout<<"Greatest number is : "<<s[s.length()-1]<<endl;
   return 0;
}
