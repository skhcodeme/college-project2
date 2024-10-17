#include<iostream>
using namespace std;

struct Node{
int data;
Node* prev;
Node* next;

};

class DoublyLinklist{public:
    
Node* head;

DoublyLinklist() : head(nullptr){}

void insert(int data){
    Node* newNode = new Node{data,nullptr,head};
    if(head!=nullptr){
        head->prev=newNode;
    }
    head = newNode;
}

void printlist(){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

};

int main(){
    DoublyLinklist dll;
    dll.insert(1);
    dll.insert(3);
    dll.printlist();
    return 0;
}