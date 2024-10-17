#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = nullptr;

        if (rear == nullptr) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }

        int x = front->data;
        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
        return x;
    }

private:
    Node* front;
    Node* rear;
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;
}