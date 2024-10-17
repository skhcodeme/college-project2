#include<iostream>
using namespace std;
 
void  swap(int *x ,int *y){
	
	int temp;
	temp = *x;  // here we do de referencing 
	*x = *y;
	*y = temp;	
} 

int main(){
	
 int a , b;
 a = 10;
 b= 20;    // and here address must be pass 
 swap(a,b);
 cout<<a<<endl;
 cout<<b<<endl;
}
