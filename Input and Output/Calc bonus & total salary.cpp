#include <iostream>
using namespace std;

int main()
{
    float basic,bonus;
    
    cout<<"Enter Basic Salary:- ";
    cin>>basic;
    bonus=0.1*basic;                //10% bonus
    
    cout<<"Bonus id :)  => "<<bonus<<endl;
    cout<<"Total Salary => "<<bonus+basic;
    return 0;
}
