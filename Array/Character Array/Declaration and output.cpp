#include<iostream>
using namespace std;
int main()
{
    char arr[100]="apple";
    cout<<arr<<endl;
    int i=0;
   while(arr[i]!='\0')
   {
       cout<<arr[i]<<" ";
       i++;
   }
   return 0;
}
