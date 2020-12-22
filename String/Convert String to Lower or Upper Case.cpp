#include<iostream>
#include<string>
using namespace std;

string upperCase(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    return s;
}

string lowerCase(string s)
{
   for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<"Original String : "<<s<<endl;
    int n;
    cout<<"Enter 1 to convert to UpperCase and 2 for LowerCase : ";
    cin>>n;
    switch(n)
    {
        case 1 : cout<<upperCase(s)<<endl;
                  break;
                  
        case 2 : cout<<lowerCase(s)<<endl;
                  break;
        
        default :cout<<"Wrong Input :(";          
    }
   return 0;
}
