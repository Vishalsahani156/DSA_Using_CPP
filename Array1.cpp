#include<iostream>
#include<iomanip>
using namespace std;

class Array {
    int capacity;
    int last_index;
    int *ptr;
    
    public:
    Array(int);
    void Append(int);
    bool isFull();
    bool isEmpty();
    void Insert(int, int);
    void Delete(int);
    int get(int);
    int countElements(); // Corrected the name from coutEl to countElements
    ~Array();
    int indexReturn(int);  // Renamed from indexRetur
};

Array::Array(int size) {
    if (size <= 0) {
        cout << "Invalid size" << endl;
    } else {
        capacity = size;
        ptr = new int[capacity];  // Allocate memory
        last_index = -1;
    }
}

bool Array::isFull() {
    return last_index == capacity - 1;
}

bool Array::isEmpty() {
    return last_index == -1;
}

void Array::Append(int data) {  // Added this method to append at the end
    if (isFull()) {
        cout << "Array is full" << endl;
    } else {
        last_index++;
        ptr[last_index] = data;
    }
}

void Array::Insert(int index, int data) {
    if (index < 0 || index > last_index + 1) {
        cout << "Invalid index" << endl;
    } else if (isFull()) {
        cout << "Array overflow" << endl;
    } else {
        // Shift elements to the right
        for (int i = last_index; i >= index; i--) {
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = data;
        last_index++;
    }
}

void Array::Delete(int index) {
    if (index < 0 || index > last_index) {
        cout << "Invalid index" << endl;
    } else if (isEmpty()) {
        cout << "Array underflow" << endl;
    } else {
        // Shift elements to the left
        for (int i = index; i < last_index; i++) {
            ptr[i] = ptr[i + 1];
        }
        last_index--;
    }
}

int Array::get(int index) {
    if (index < 0 || index > last_index) {
        cout << "Invalid index" << endl;
        return -1;
    } else if (isEmpty()) {
        cout << "Array is empty" << endl;
        return -1;
    } else {
        return ptr[index];
    }
}

int Array::countElements() {
    if (isEmpty()) {
        return 0;
    }
    return last_index + 1;
}

Array::~Array() {
    if (ptr) {
        delete[] ptr;  // Correct memory deallocation
    }
}

int Array::indexReturn(int index) {
    if (index < 0 || index > last_index) {
        cout << "Invalid index" << endl;
        return -1;
    } else {
        return index;
    }
}

int main() {
    Array arr(5);  // Creating an array of size 5
    
    // Test the methods
    arr.Append(10);
    arr.Append(20);
    arr.Append(30);
    
    arr.Insert(1, 15);
    
    cout << "Element at index 1: " << arr.get(1) << endl;
    
    arr.Delete(2);
    
    cout << "Number of elements: " << arr.countElements() << endl;

    return 0;
}
