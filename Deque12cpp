#include <iostream>
#include <iomanip>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;

};
class Deque{
    private:
    node *front;
    node *real;
    public:
    Deque();
    void inserFront(int);
    void insertRear(int);
    void deleteFront();
    void deleteReal();
    bool isEmpty();
    int getFront();
    int getReal();
    ~Deque();
};
Deque::Deque(){
    front=NULL;  
    real=NULL;
}  
void ::Deque inserFront(int data){
    node *n=new node;
    n->item=data;
    n->next=NULL;
    n->prev=NULL;
    if(real==NULL)
    real=n;
 else
    front->prev=n;
    front=n
 
}     
void ::Deque inserReal(int data){
   node *n=new node;
   n->next=NULL;
   n->item=data;
   n->prev=real;
   if(front==NULL){
    real=n;
   }
   else
    real->next=n;
    real=n;
   
}     
void Deque::deleteFront(){
    node *t;
    t=front;
    if(front==NULL)
    throw NULL;
   if(real=front==NULL)
     front=real=NULL;
   else{
    front=front->next
    front->prev=NULL;
   }
   delete t;

}   
void Deque::deleteReal(){
     if(isEmpty())
     throw NULL;
    node *t=real;
    if(real==NULL)
    real=front=NULL;
else{
    real=real->prev;
    real->next=NULL;

}
delete t;

}   
bool Deque::isEmpty(){
    return real==NULL && front==NULL;
}
int Deque::getFront(){
  if(isEmpty())
  throw NULL;
 return real->item;
} 
int Deque::getReal(){
  if(isEmpty())
  throw NULL;
return real->item;
}
~Deque::Deque(){
    while(isEmpty()){
    deleteFront();
    }

}
int main(){

    return 0;
}