#include<iostream>
using namespace std;

int main(){


int*ptr;

ptr = new int;
 
 // assign a value to the dynamic allocated memory 
*ptr = 10;

// print the adress value 

cout<<"adress : "<<ptr<<endl;

cout<<"value"<<*ptr<<endl;

// deallocate the memory 

delete ptr;

return 0;

}

