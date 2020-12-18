#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl;  //2000
    
    ptr++;
    
    cout<<ptr<<endl;   //2004
    return 0;
}
