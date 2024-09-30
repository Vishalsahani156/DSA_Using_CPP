#include<iostream>
#include<iomanip>
using namespace std;

class DynamicArray {
    int capacity;
    int lastIndex;
    int *ptr;
    
    public:
    DynamicArray(int size);    // Constructor with size parameter
    void doubleArray();        // Double the array size
    void halfArray();          // Halve the array size
    bool isFull();             // Check if array is full
    bool isEmpty();            // Check if array is empty
    int getCapacity();         // Get the current capacity of the array
    void insertAt(int index, int data);  // Insert at a specific index
    void editAt(int index, int data);    // Edit data at a specific index
    void deleteAt(int index);  // Delete data at a specific index
    int getElement(int index); // Get element at a specific index
    int countElements();       // Count the total elements in the array
    ~DynamicArray();           // Destructor
    int findIndex(int data);   // Find the index of specific data
};

DynamicArray::DynamicArray(int size) {
    if (size <= 0) {
        cout << "Enter a valid size" << endl;
    } else {
        capacity = size;
        ptr = new int[capacity];  // Allocate memory for array
        lastIndex = -1;
    }
}

void DynamicArray::doubleArray() {
    int *temp = new int[capacity * 2];  // Allocate new array with double capacity
    for (int i = 0; i <= lastIndex; i++) {
        temp[i] = ptr[i];               // Copy elements to the new array
    }
    delete[] ptr;                       // Delete the old array
    ptr = temp;                         // Point to the new array
    capacity *= 2;                      // Double the capacity
}

void DynamicArray::halfArray() {
    int *temp = new int[capacity / 2];  // Allocate new array with half capacity
    for (int i = 0; i <= lastIndex; i++) {
        temp[i] = ptr[i];               // Copy elements to the new array
    }
    delete[] ptr;                       // Delete the old array
    ptr = temp;                         // Point to the new array
    capacity /= 2;                      // Halve the capacity
}

bool DynamicArray::isFull() {
    return lastIndex == capacity - 1;   // Check if array is full
}

bool DynamicArray::isEmpty() {
    return lastIndex == -1;             // Check if array is empty
}

int DynamicArray::getCapacity() {
    return capacity;                    // Return current capacity
}

void DynamicArray::insertAt(int index, int data) {
    if (index < 0 || index > lastIndex + 1) {
        cout << "Invalid index" << endl;
    } else if (isFull()) {
        doubleArray();  // Double array size if full
    }
    for (int i = lastIndex; i >= index; i--) {
        ptr[i + 1] = ptr[i];  // Shift elements to the right
    }
    ptr[index] = data;        // Insert the new data
    lastIndex++;
}

void DynamicArray::editAt(int index, int data) {
    if (index < 0 || index > lastIndex) {
        cout << "Invalid index" << endl;
    } else {
        ptr[index] = data;   // Edit data at the given index
    }
}

void DynamicArray::deleteAt(int index) {
    if (index < 0 || index > lastIndex) {
        cout << "Invalid index" << endl;
    } else if (lastIndex + 1 <= capacity / 2) {
        halfArray();  // Halve array size if necessary
    }
    for (int i = index; i < lastIndex; i++) {
        ptr[i] = ptr[i + 1];  // Shift elements to the left
    }
    lastIndex--;
}

int DynamicArray::getElement(int index) {
    if (index < 0 || index > lastIndex) {
        cout << "Invalid index" << endl;
        return -1;
    } else {
        return ptr[index];    // Return the element at the given index
    }
}

int DynamicArray::countElements() {
    return lastIndex + 1;     // Return the number of elements in the array
}

DynamicArray::~DynamicArray() {
    delete[] ptr;             // Free the allocated memory
    cout << "Array deleted" << endl;
}

int DynamicArray::findIndex(int data) {
    for (int i = 0; i <= lastIndex; i++) {
        if (ptr[i] == data) {
            return i;         // Return the index of the data if found
        }
    }
    return -1;                // Return -1 if the data is not found
}

int main() {
    DynamicArray d1(30);  // Create a dynamic array with capacity 30
    
    d1.insertAt(0, 10);  // Insert element at index 0
    d1.insertAt(1, 20);  // Insert element at index 1
    d1.insertAt(2, 30);  // Insert element at index 2
    
    cout << "Element at index 1: " << d1.getElement(1) << endl;
    d1.editAt(1, 25);    // Edit element at index 1
    
    cout << "Updated element at index 1: " << d1.getElement(1) << endl;
    d1.deleteAt(1);      // Delete element at index 1
    
    cout << "Element count: " << d1.countElements() << endl;
    
    return 0;
}
