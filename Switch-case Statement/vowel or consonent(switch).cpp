#include <iostream>

using namespace std;

int main()
{
   
    char syb;
    cout<<"Enter a character = ";
    cin>>syb;
    switch(syb)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':cout<<"It is a vowel :) ";
                break;
        
        default:cout<<"It is a consonant :)";
    }

    return 0;
}
