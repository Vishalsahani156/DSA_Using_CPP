#include<iostream>
#include<iomanip> // Fixed header for `iomanip`
using namespace std;

struct node {
    node *pre;   // Pointer to the previous node
    int item;    // Data item in the node
    node *next;  // Pointer to the next node
};

class DLL {
    private:
        node *start;  // Pointer to the start of the doubly linked list
    public:
        DLL();                          // Constructor
        void insertBeg(int);             // Insert at the beginning
        void insertEnd(int);             // Insert at the end
        node* search(int);               // Search for a node by value
        void insertAfter(int, node*);    // Insert after a specific node
        void deleteFirst();              // Delete the first node
        void deleteLast();               // Delete the last node
        void deleteNode(int);            // Delete a node by value
        ~DLL();                          // Destructor
};

// Constructor: Initialize an empty doubly linked list
DLL::DLL() {
    start = NULL;
}

// Insert a node at the beginning of the list
void DLL::insertBeg(int data) {
    node *n = new node;
    n->pre = NULL;      // No previous node since it's the first node
    n->item = data;     // Assign data
    n->next = start;    // Next will be the old start node

    if (start) {
        start->pre = n;  // Update previous pointer of the old start node
    }
    start = n;          // New node becomes the start node
}

// Insert a node at the end of the list
void DLL::insertEnd(int data) {
    node *n = new node;
    n->next = NULL;     // No next node since it's the last node
    n->item = data;

    if (start == NULL) {
        n->pre = NULL;  // No previous node since it's the only node
        start = n;      // Start points to the new node
    } else {
        node *t = start;
        while (t->next != NULL) {
            t = t->next;  // Traverse to the last node
        }
        n->pre = t;        // New node's previous will be the last node
        t->next = n;       // Last node's next will point to the new node
    }
}

// Search for a node by value
node* DLL::search(int data) {
    node *t = start;
    while (t) {
        if (t->item == data) {
            return t;  // Return the found node
        }
        t = t->next;    // Move to the next node
    }
    return NULL;        // Return NULL if not found
}

// Insert a node after a given node
void DLL::insertAfter(int data, node *temp) {
    if (temp) {
        node *n = new node;
        n->item = data;
        n->next = temp->next;  // New node's next will be temp's next
        n->pre = temp;         // New node's previous will be temp

        if (temp->next != NULL) {
            temp->next->pre = n;  // Update the next node's previous to point to the new node
        }
        temp->next = n;           // Update temp's next to point to the new node
    }
}

// Delete the first node
void DLL::deleteFirst() {
    if (start) {
        node *t = start;
        if (start->next == NULL) {
            delete start;         // If there's only one node, delete it
            start = NULL;
        } else {
            start = start->next;  // Move start to the second node
            start->pre = NULL;    // Update new start's previous to NULL
            delete t;             // Delete the old start node
        }
    }
}

// Delete the last node
void DLL::deleteLast() {
    if (start) {
        if (start->next == NULL) {
            delete start;         // If there's only one node, delete it
            start = NULL;
        } else {
            node *t = start;
            while (t->next != NULL) {
                t = t->next;  // Traverse to the last node
            }
            t->pre->next = NULL;  // Set second-last node's next to NULL
            delete t;             // Delete the last node
        }
    }
}

// Delete a node by its value
void DLL::deleteNode(int data) {
    if (start) {
        node *t = start;
        while (t) {
            if (t->item == data) {
                if (t->next != NULL) {
                    t->next->pre = t->pre;  // Update next node's previous pointer
                }
                if (t->pre == NULL) {
                    start = t->next;  // If it's the first node, update start
                } else {
                    t->pre->next = t->next;  // Update previous node's next pointer
                }
                delete t;  // Delete the found node
                break;
            }
            t = t->next;  // Move to the next node
        }
    }
}

// Destructor: Deletes all nodes in the list
DLL::~DLL() {
    while (start) {
        deleteFirst();  // Keep deleting the first node until the list is empty
    }
}

int main() {
    DLL list;
    list.insertBeg(10);
    list.insertEnd(20);
    list.insertEnd(30);
    node* found = list.search(20);
    if (found) {
        list.insertAfter(25, found);
    }
    list.deleteFirst();
    list.deleteLast();
    list.deleteNode(25);

    return 0;
}
