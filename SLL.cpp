#include<iostream>
#include<iomanip>
using namespace std;
struct node{
    int item;
    node *next;
};
class SLL{
    private:
    node *start;
    public:
    SLL()
    void insertBeg(int);
    void insertEnd(int);
    *node serchNode(int);
    void inserNodeAf(*node,int);
    void deletFi();
    void deletLast();
    void deletNodeSpecifid(node);
    ~SLL();
    }
SLL::SLL(){
    start=NULL;
}
void SLL::insertBeg(int data){
    node *n;
    n=new node;
    n->item=data;
    n->next=NULL;
    if(start){
        start=n;
        start->next=n;
        else{
             start=n;
             start->next;
             start->next=n;


        }
    }
}
void SLL::insertEnd(int data){
    node *n;
    n=new node;
    n->item=data;
    n->next=NULL;
    if(start){
        start=n;
        start->next=n;
        else{
            node *t;
            t=start;
            while(t!=NULL){
                t=t->next;
            }
            t->next=n->next;
        }
    }
}
*node SLL::serchNode(int data){
    if(start)
    return -1;
   else{
    node *t;
    t=start;
    while(t->item==data){
        return t->item
    }
    t=t->next;
   }
}
void SLL::inserNodeAf(node *temp,int data){
   node *n;
   n=new node;
   n->item=data;
  
  
  
   
}
void deletFi(){
     node *t;
    if(start==NULL){
        cout<<"list Empty deletion not possible"<<endl;
        else if( node *t)
}  else{
    t=start;
    start=start->next;
    delet t[];
    
}
}
void deletLast(){
    if(start)
        cout<<"Empty list"<<endl;
    node *t;
    t=start;
    else if(t->next==NULL){
        delet[]t;
        start=NULL;
    }
    else{
        while(t=t->next!=NULL){
            delet[]t;
            t->next=NULL;
        }
        t->next;
    }
}
void SLL::deletNodeSpecifid(node temp){
    if(start){

    }
}
~SLL::SLL(){
    while(start!=NULL){
        deletFi();
    }
}