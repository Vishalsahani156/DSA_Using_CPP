#include<iostream>
#include<iomanip>
using namespace std;
struct node{
    node *leaft;
    int item;
    node *right;
};
class BST{
    private:
    node *root;
    public:
    BST();
    bool isEmpty();
    void insertBst(int);
    int preTraverson();
    int postTraverson();
    int inTravarsion();
    void deleteBst(int);
    int searchElement(int);
    ~BST();
};
BST::BST(){
    root=NULL;

}
bool BST::isEmpty(){
    if(root==NULL)
    true;
else 
return false;
// second syntax of  isEmpty 
// return root==NULL;
}
void BST::insertBst(int data){
    node *n=new node;
   n->item=data;
   if(isEmpty()){
    n->leaft=NULL;
    n->right=NULL;
    root=n;
   }
   else{
    node *t=root;
        while(t->leaft!=NULL)
        if(root->item<=data){
        t=t->leaft;
        t->leaft=n;
        t->right=NULL;
        n->leaft=t;
        t=n;
        }
        else{
        t=t->right;
        t->right=n;
        t->leaft=NULL;
        n->right=t;
        t=n;
        }
   if(t->right!=NULL){
   if(t->item>=data){
    t->leaft=n;
    t->righ=NULL;
    n->leaft=t;
    t=n;
   }
   if(t->item<=data){
    t-right=n;
    t->righ=NULL;
    t->leaft=NULL;
    n->right=t;
    t=n;
   }
   t=t->right
   }
 }

}
void BST::preTraverson(){
    if(isEmpty())
    return NULL;
}
void BST::postTraverson(){

}
void BST::inTravarsion(){

}
int BST::deleteBst(int data){
    if(isEmpty())
    return NULL;
else{
    
}
}
int  BST::searchElement(int data){

}