#include<iostream>
using namespace std;
int main()
{
    //Check Palindrome
    int n;
    cout<<"Enter Size of Character array : ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter a word : ";
    cin>>arr;
    
    int i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]!=arr[n-1-i])
        {
            cout<<"Not a Palindrome ";
            return 0;
        }
        i++;
    }
    cout<<"Palindrome";
    return 0;
}
