#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* create(Node* head) {
    int val;
    cout << "Enter values (-1 to stop): ";
    while (cin >> val && val != -1) {
        Node* newNode = new Node{val, nullptr};
        if (!head) head = newNode;
        else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
    return head;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int ch;
    do {
        cout << "1. Create 2. Display 3. Exit: ";
        cin >> ch;
        if (ch == 1) head = create(head);
        else if (ch == 2) display(head);
    } while (ch != 3);
    return 0;
}

