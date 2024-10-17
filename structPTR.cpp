#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
int length;	
int breadth;	
	
};

int main(){
	
struct Rectangle *p;
p=new Rectangle;	// allocating memory in heap 
	p->breadth = 10;
	p->length= 20;
cout<<"Length "<<p->breadth<<endl;	
cout<<"breadth "<<p->length<<endl;	
}
