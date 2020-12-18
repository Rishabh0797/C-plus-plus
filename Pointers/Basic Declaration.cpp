#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;    //ampersand => '&'  it means address of variable a 
    
    cout<<&a<<" "<<ptr;
    
    cout<<endl<<*ptr;    //dereferencing => '*'   it means value at address which stored in ptr
    return 0;
}
