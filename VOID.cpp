#include<iostream>
using namespace std;


int main()
{
 void *ptr;
 int x = 10;
 ptr = &x;
 //cout<<*ptr<<endl; // this will be throw error because you cannot dereferncing void data type	
	cout<<*(int*)ptr<<endl;
}
