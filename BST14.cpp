#include<iostream>
#include<iomanip>
using namespace std;

struct node {
    node *left;  // Corrected 'leaft' to 'left'
    int item;
    node *right;
};

class BST {
    private:
    node *root;

    protected:
    void preOrderTraverse(node *);
    void inOrderTraverse(node *);
    void postOrderTraverse(node *);
    node* deleteBstRec(node*, int);

    public:
    BST();
    bool isEmpty();
    void insertBst(int);
    void preOrder();
    void inOrder();
    void postOrder();
    void deleteBst(int);
    node* searchBST(int);
    ~BST();
};

BST::BST() {
    root = NULL;
}

bool BST::isEmpty() {
    return root == NULL;
}

void BST::insertBst(int data) {
    // Create new node 
    node *n = new node;
    n->left = NULL;
    n->item = data;
    n->right = NULL;
    
    if (isEmpty()) {
        root = n;
        return;
    }

    // Create a pointer and traverse the tree using this pointer 
    node *ptr = root;
    while (ptr->item != data) {
        if (data < ptr->item) {
            if (ptr->left != NULL) {
                ptr = ptr->left;
            } else {
                ptr->left = n;
                break;
            }
        } else if (data > ptr->item) {
            if (ptr->right != NULL) {
                ptr = ptr->right;
            } else {
                ptr->right = n;
                break;
            }
        }
    }

    // Check for duplicate values
    if (ptr->item == data) {
        delete n;
        cout << "Duplicate value cannot be inserted into the BST." << endl;
    }
}

void BST::preOrderTraverse(node *ptr) {
    if (ptr) {
        cout << ptr->item << " ";
        preOrderTraverse(ptr->left);
        preOrderTraverse(ptr->right);
    }
}

void BST::preOrder() {
    preOrderTraverse(root);
    cout << endl;
}

void BST::inOrderTraverse(node *ptr) {
    if (ptr) {
        inOrderTraverse(ptr->left);
        cout << ptr->item << " ";
        inOrderTraverse(ptr->right);
    }
}

void BST::inOrder() {
    inOrderTraverse(root);
    cout << endl;
}

void BST::postOrderTraverse(node *ptr) {
    if (ptr) {
        postOrderTraverse(ptr->left);
        postOrderTraverse(ptr->right);
        cout << ptr->item << " ";
    }
}

void BST::postOrder() {
    postOrderTraverse(root);
    cout << endl;
}

node* BST::searchBST(int data) {
    node *ptr = root;
    
    while (ptr != NULL && ptr->item != data) {
        if (data < ptr->item) {
            ptr = ptr->left;
        } else {
            ptr = ptr->right;
        }
    }
    return ptr;  // Return the pointer if found, otherwise NULL
}

node* BST::deleteBstRec(node *ptr, int data) {
    if(ptr==NULL)
    return NULL;

    if(ptr->item<data){
        ptr->leaft=deleteBstRec(ptr->leaft,data);
    }
    else if(ptr->right>data){
        ptr->right=deleteBstRec(ptr->right,data);
    }
    else{
        // delete the single no chailde 
        if(ptr->right==NULL &&ptr->leaft==NULL){
            delete ptr;
            return NULL;
        }
        // delet the  node one chailde 
        if(ptr->leaft=NULL ||ptr->right=NULL){
            node *chail=ptr->leaft?ptr->leaft:ptr->right;
            delete ptr;
            return chail;
        }
        // delete the two  chailde  node 
        node *pred, *parpred;
        parpred=pred;
        pred=ptr->leaft;
        while(ptr->right!=NULL){
            parpred=pred;
            pred=pred->right;

        }
        if(parpred->item==pred){
            parpred->right=deleteBstRec(pred,pred->item)
        }
    }
    
}

void BST::deleteBst(int data) {
    root = deleteBstRec(root, data);
}

BST::~BST() {
    while (root != NULL) {
        deleteBst(root->item);
    }
}

// Main function
int main() {
    BST b1;
    b1.insertBst(10);
    b1.insertBst(20);
    b1.insertBst(40);
    b1.insertBst(50);
    b1.inOrder();  // Outputs the BST in inorder traversal

    return 0;
}
