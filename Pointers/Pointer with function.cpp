#include<iostream>
using namespace std;

void increment(int *a)
{
    (*a)++;
}

int main()
{
    int a=10;
    cout<<a<<endl;
    
    increment(&a);   //call by referrences
    
    cout<<a<<endl;
    
    return 0;
    
}
