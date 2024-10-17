#include<iostream>
using namespace std;

void swap(int *a, int *b){ // formal parameter are pointer 
int temp;
temp = *a;
*a = *b;

*b = temp;
	
	
}

int main(){
int x ,y ;

x = 10;
y = 20;

 swap(&x , &y); // address of actual para meters pass
	
cout<<x<<endl;	
	
cout<<y<<endl;	
}
