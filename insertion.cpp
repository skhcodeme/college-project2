#include<iostream> // wap to insert and delete to from link list  link list
using namespace std;

struct node{
int data 
 struct node  *next ;	
	
}*start=null,q,t;

int main(){
int ch ;
void insert_beg();
void insert_end();	
void insert_pos();		
void display();
void delete_beg();	
void delete_end();
void delete_pos();
while(1){
cout<<"\n single link list ";	
cout<<"\n insert\n display \n delete";	
cout<<"enter your choice ";	
  
switch (ch){
case 1:
cout<<"\n imnsert menu"	;
cout<<"\n  insert begning ";
cin>>ch;
case 1: insert_beg();
   break:
case 2: insert_end();
    break: 
case 3: insert_post();
   break:
case 4: exit(0);
default: cout<<"wrong choice";
 	
}
break;
}	
	
}
