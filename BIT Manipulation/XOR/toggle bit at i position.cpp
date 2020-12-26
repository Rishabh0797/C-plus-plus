#include <iostream>

using namespace std;

int main()
{
    int num,i;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter position: ";
    cin>>i;
    int temp;
    temp=num^(1<<i);
    cout<<temp;
    
   return 0;
}
