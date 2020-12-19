#include <iostream>
using namespace std;

int main() {
	int a=10;
	int *ptr;
	ptr=&a;
	
	 cout<<a<<" "<<*ptr<<endl;
	 cout<<&a<<" "<<ptr<<endl;
	 cout<<&ptr<<endl;
	 
	 int **qtr=&ptr;
	 cout<<*qtr<<endl;   //*qtr points value in ptr which is address of a
	 cout<<**qtr<<endl;  //**qtr points value in ptr and then it points value at a ie 10
	 
	return 0;
}

