#include<iostream>
using namespace std;

int main()
{
    char arr[]={'a','b','c'};
    //subsequence
    int n=3;
     for(int i=0;i<(1<<n);i++)
   {
       for(int j=0;j<n;j++)
       {
           if((i&(1<<j)))
           {
               cout<<arr[j]<<", ";
           }
       }
       cout<<endl;
   }
   return 0;
}
