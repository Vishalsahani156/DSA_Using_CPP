#include <iostream>
#include <iomanip>
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
  void travers();
  int deleteBst();
  int search();
  ~BST();

};
BST::BST(){
    root=NULL;

}
bool BST::isEmpty(){
    return root==NULL;
}
void BST::insertBst(int data){
    node *n=new node;
    n->leaft=NULL;
    n->item=data;
    n->right=NULL;
    // this is first senario 
    if(isEmpty())
    root=n;
else if(root->item==data)
cout<<" dublicate value can not allow"<<endl;
  else {
    node *t;
    t=root;
    while(t){
        else if(t->item<data){
            if(t->leaft==NULL){
                t->leaft=n;
                t=n;
            }
        }
        else{
            if(t->item>data){
                if(t->right==NULL){
                    t->right=n;
                    t=n;
                }
            }
        }
    }
    t=t->leaft;
  }
}
void BST::travers(){
    if(isEmpty())
    cout<<" tree is empty "<<endl;
 else{
    node *t=root;

 }
}
void BST::deleteBst(){
    if(isEmpty())
    cout<<"empty "<<endl;
else{
 node *t=root,prevt;
 // single node in tree and  maximum node one 
 if(root->leaft==NULL &&root->right==NULL){
    deletet t[];
    root=NULL;
 }
 // single node delete and last  leaf node delete 
 while(t){
    prevt=t;
while(t->right!=NULL){
   if(t->leaf==NULL){
    delete t;
    prevt->leaf=NULL;
   }
}   
   else{
while(t->right!=NULL){
if(t->right==NULL){
    delete t;
    prevt->right=NULL;
}
}
   }
}
}
}
int BST::search(int data){
    if(isEmpty())
    return NULL;
else{
    node *t=root;
    if(t->item<data){
        while(t->leaf!=NULL){
            if(t->item==data){
                return t->item;
               break;
            }
            t=t->leaf;
        }
    }
    else{
        while(t->right!=NULL){
            if(t->item==data){
                return t->item;
                break;
            }
            t=t->right;
        }
    }

}
}
~BST::BST(){
    while(isEmpty()){
        deleteBst();
    }
    cout<<" delete the all node from  the tree "<<endl;
}