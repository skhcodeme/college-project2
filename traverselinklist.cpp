#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

class Doublylinklist{
public: 
Node* head;
Doublylinklist() : head(nullptr){}
void insert(int data){
    Node* newNode = new Node{data,nullptr,head};
    if(head!=nullptr){
        head->prev = newNode;
    }
    head = newNode;
} 
void traverse(){
Node* current = head;
while(current !=nullptr){
    cout<<current->data<<" ";
    current = current->next;
}

   }

    };



int main(){
    Doublylinklist dll;
    dll.insert(1);
    dll.insert(2);
    dll.insert(3);
    cout<<" list : ";
    dll.traverse();
    return 0;
}