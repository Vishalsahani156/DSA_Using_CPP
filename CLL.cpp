#include<iostream>
#include<iomanip>
using namespace std;
struct node{
    int item;
    node *next;
};
class CLL{
 private:
 node *last;
 public:
 CLL();
 void insertAF(int);
 void insertEnd(int);
 *node sarch(int);
 void deleteFi();
 void deleteLa();
 ~CLL();

};
// this is the constructor to insilaize the last pointer with null
CLL::CLL(){
    last=NULL;
}
CLL::void insertAF(int data){
 node *n=new node;
 n->item=data;
 if(last){
    last=n->next;
  n=last;
 }

    last->next=n->next;
    n->next=last;
 
 
}

CLL:: void insertEnd(int data){
    node *n=new node;
    n->item=data;
    node *t;
    if(last){
         last=n->next;
 n=last;
    }
    t=last->next;
    while(t->next!=NULL){
        t=t->next;
    }
    last->next=n->next;
    n->next=last;
    
   
}
CLL::*node(int data){
    if(last){
        return NULL;
    }
    else{
        node *t;
        t=last;
        while(t->item==data){
            return t;
        }
        t=t->next
    }
    
}
void CLL::deleteFi(){
    if(last){
        node *t;
        t=last;
        if(last->next==NULL){
        last=NULL;
       delete t[];
    }
    else{
        last->next->next;
        delete t[];
    }
    }


}
void CLL::deleteLa(){
node *t;
t=last;
if(last{
 if(t->next==NULL){
    t=NULL;
    delete t[];
    else{
        while(t->next->next!=NULL){
            t=t->next
        }
        t->next=NULL;
        delete  last[];

    }
 }
})
}
~CLL::CLL(){
    while(!last){
   deleteFi();

    }
}
int main(){
    
    return 0;
}
