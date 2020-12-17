#include<iostream>
using namespace std;
int main()
{
    int n;
   cin>>n;
    
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n+1);
    cin.ignore();
    
    int i=0,present=0,mx=0,start=0,end=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(present>mx)
            {
                mx=present;
                end=i-1;
                start=i-present;
            }
            present=0;
        }
        else
        {
            present++;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<"Max lenght : "<<mx<<endl;
    
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
