#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin, s);
    int arr[26]={0};
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(int i;i<s.length();i++)
    {
        arr[s[i]-97]++;
    }
    int mx=INT_MIN,ind;
    for(int i=0;i<26;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
            ind=i;
        }
    }
    cout<<"Character '"<<(char)(ind+97)<<"' is most occurring and its frequency is : "<<mx;
    
   return 0;
}
