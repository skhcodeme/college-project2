#include<iostream>
using namespace std;

int main(){
	
int a = 10;
int *p;

p = &a;  //intialization of pointer

	cout<<a<<endl;
	cout<<*p<<endl; // this  portion is dereferecing 
	cout<<p<<endl; // it will print address
	cout<<&a<<endl; // it's also print same address
	
}
