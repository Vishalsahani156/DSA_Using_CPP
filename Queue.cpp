#include<iostream>
#include<iomanip>
using namespace std;

class Queue {
    private:
    int cap;
    int front;
    int real;
    int *ptr;

    public:
    Queue(int);
    bool overflow();
    bool underflow();  // Renamed to underflow for consistency
    void insertReal(int);
    int viewReal();
    int viewFront();
    void deleteFront();
    ~Queue();
    int countElement();  // Typo corrected from coutElement to countElement
};

Queue::Queue(int size) {
    if (size > 0)
        cap = size;
    ptr = new int[cap];
    front = -1;
    real = -1;
}

bool Queue::overflow() { // Checks if the queue is full
    return real == cap - 1;
}

bool Queue::underflow() {  // Checks if the queue is empty
    return real == -1;
}

void Queue::insertReal(int data) {
    if (front == 0 && real == cap - 1 || real == front - 1)  // Fixed the overflow condition
        cout << "Overflow" << endl;
    else if (real == -1) {
        real = 0;
        front = 0;
        ptr[real] = data;
    }
    else if (real < cap - 1) {
        real++;
        ptr[real] = data;
    }
    else {  // Wrap around condition for circular queue
        real = 0;
        ptr[real] = data;
    }
}

int Queue::viewReal() {
    if (underflow())
        throw 1;
    return ptr[real];
}

int Queue::viewFront() {
    if (underflow())
        throw 1;
    return ptr[front];
}

void Queue::deleteFront() {
    if (underflow())
        cout << "Queue is empty" << endl;
    // Single element case
    else if (front == real) {
        real = front = -1;
    }
    // Front at the end of the array, wrap around
    else if (front == cap - 1) {
        front = 0;
    }
    // Normal case
    else {
        front++;
    }
}

Queue::~Queue() {
    if (ptr)
        delete[] ptr;
}

int Queue::countElement() {  // Fixed method name and logic for counting elements
    if (underflow())
        cout << "Queue is empty" << endl;

    if (real >= front)
        return real - front + 1;
    else {
        return cap - front + real + 1;
    }
}

int main() {
    return 0;
}
