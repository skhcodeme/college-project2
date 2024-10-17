#include<iostream>
using namespace std;

struct node{
int data;
struct node* next;	
		
};
struct node* circularSingly(int data){
	struct node* temp = new node();
	temp->data = data;
	temp->next = temp;
	return temp;
}

int main(){
	
	int data = 32;
	struct node*  tail;
	tail = circularSingly(data);
	cout<<tail->data<<endl;
	return 0;
}
