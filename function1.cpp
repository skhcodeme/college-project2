#include<iostream>
using namespace std;

int add(int a, int b){ // prototype of fn or header of fn 
	
	int c;
	
	c = a+b;
	
	return c;
	
}
 
int main(){
	int x , y ,z;
	x = 10;
	y = 20;
	z = add(x,y);
	
	cout<<z<<endl;	
	
	
} 
