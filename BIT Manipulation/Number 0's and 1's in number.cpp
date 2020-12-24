#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int num,one=0,zero=0;
    cin>>num;
   while(num!=0)
   {
       if(num&1)
       {
          one++;
       }
       else
       {
           zero++;
       }
       num=num>>1;
   }
   cout<<"Number of one's = "<<one<<"\n zero's = "<<zero;

   return 0;
}
