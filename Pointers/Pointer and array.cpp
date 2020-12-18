#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int *ptr;
    ptr=arr;
    for(int i=0;i<4;i++)
    {
        cout<<*ptr++<<" "<<*(arr+i)<<endl;
        //arr++ is illegal because arr is indexing pointer
    }
    return 0;
}
