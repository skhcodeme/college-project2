#include<iostream>

using namespace std;

int main(){
	
int *p1 = new int;
int *p2 = new int;
int *p3 = new int ;	
	*p1 = 2;
	*p2 = 3;
	
	*p3 = *p1;
	*p1 = *p2;
	*p2 = *p3;
cout<<*p1<<endl;
cout<<*p2<<endl;	
free;
	
}
