#include<iostream>
#include<ioamanip>
using namespace std;
struct node{
  node *pre;
  int item;
  node *next;
};
class DLL{
    private:
  node *start;
    public:
    DLL();
    void insertBeg(int);
    void insertEnd(int);
    *node sarch(int);
    void insertAF(int,*node);
    void deleteFi();
    void deleteLs();
    void deleteNod(int);
    ~DLL();
    
};
DLL::DLL(){
    start=NULL;
}
void DLL::insertBeg(int data){
  node *n;
  n=new node;
  n->pre=NULL;
  n->next=data;
  n->next=start;
  if(start)
  start->next=n;
  start=n;
}
   
void DLL::insertEnd(int data){
  node *n,*t;
  n= new node;
  n->next=NULL;
  n->item=data;
  if(start==NULL){
    start->pre=NULL;
    start=n;
  }
  else{
    t=start;
    while(t->next!=NULL){
      t=t->next
    }
    n->pre=n;
    t->next=n;

  }
}
*node DLL:: sarch(int data){
  node *t;
  t=start;
  while(t){
    if(t->item==data)
    return t;
    t=t->next;
  }
  return NULL;
}
void DLL::insertAF(int data.*node temp){
  if(start)
  {
node *n;
  n=new node;
  n->item=data;
  n->next=temp->next;
  n->pre=temp->pre;
  if(temp->next!=NULL)
   temp->next->pre=n;
  temp->next=n;

  }
}
void DLL deleteFi(){
  if(start){

  if(start->next=NULL)
   delete start;
  start=NULL;
  else{
    node *t;
    t=start;
    start=start->next;
    delete t;
  }
  }
}
void DLL deleteLs(){
    if(start){
      if(start->next=NULL)
      delete start;
      start=NULL;
      else{
        node *t=start;
        while(t->new!=NULL)
        t=t->next;
      t->new-pre=NULL;
      delete t;
      }
  }
}

void DLL::deleteNod(int data){
  if(start){
    node *t;
    t=start;
    while(t)
    if(t->item==data){
      // code delete 
       if(t->next!=NULL)
       t->next->pre=t->next;
      if(t->pre==NULL)
      start=t->next;
    delete t;
      break;
    }
    t=t->next;

  }
}
~DLL::DLL(){
  while(start){
    deleteFi();

  }
}
int main(){
  
    return 0;
}