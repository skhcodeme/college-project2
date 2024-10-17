#include<iostream>
#include<queue>
using namespace std;
#define SIZE 20

class Queue {
private:
    int arr[SIZE];  
    int front;
    int rear;
    int count;
  public:
    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }
    void Enqueue(){
         if (count == SIZE) {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
            }
          int element=0;
               rear = (rear + 1) % SIZE;
        arr[rear] = element;
        
    }
};

int main(){
Queue q;
q.Enqueue();

}