#include <iostream>
#include <iomanip>
using namespace std;

struct node {
    int item;
    node* next;
};

class Queue {
private:
    node* rear;   // Changed from 'real' to 'rear' for clarity
    node* front;  // 'front' remains unchanged for clarity

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void inserReal(int);
    int viewReal();
    int viewFront();
    void deletFront();
    ~Queue();
    int getCount();
};

Queue::Queue() {
    rear = NULL; // Initialize rear as NULL
    front = NULL; // Initialize front as NULL
}

bool Queue::isEmpty() { // Corrected function signature
    return rear == NULL; // Check if the queue is empty
}

bool Queue::isFull() { 
    // This method typically isn't needed for a linked list queue since it's dynamic
    return false; // Placeholder implementation
}

void Queue::inserReal(int data) {
    node* n = new node; // Create a new node
    n->item = data; // Set the item of the new node
    n->next = NULL; // Initialize next as NULL

    if (isEmpty()) { // Check if the queue is empty
        front = rear = n; // Point both front and rear to the new node
    } else {
        rear->next = n; // Link the new node at the end
        rear = n; // Update rear to the new node
    }
}

int Queue::viewReal() {
    if (isEmpty()) // Check if the queue is empty
        return -1; // Return -1 if empty
    return rear->item; // Return the item of the rear node
}

int Queue::viewFront() {
    if (isEmpty()) // Check if the queue is empty
        throw 1; // Throw an exception if empty
    return front->item; // Return the item of the front node
}

void Queue::deletFront() {
    if (isEmpty()) // Check if the queue is empty
        throw 1; // Throw an exception if empty

    if (rear == front) { // If there's only one node in the queue
        front = rear = NULL; // Set both front and rear to NULL
    } else {
        node* t = front; // Temporarily store the front node
        front = front->next; // Move front to the next node
        delete t; // Delete the old front node
    }
}

Queue::~Queue() {
    while (!isEmpty()) { // Loop until the queue is empty
        deletFront(); // Remove all elements from the queue
    }
}

int Queue::getCount() {
    if (isEmpty()) // Check if the queue is empty
        return 0; // Return 0 if empty
    int count = 0; // Initialize count
    node* current = front; // Use a temporary pointer to traverse the queue
    while (current) {
        count++; // Increment the count
        current = current->next; // Move to the next node
    }
    return count; // Return the total count of nodes
}

int main() {
    Queue q; // Create a Queue object

    // You can add test cases here to test the functionality of the queue

    return 0;
}
