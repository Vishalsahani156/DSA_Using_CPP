#include<iostream>
#include<iomanip>
using namespace std;
struct node{
    int item;
    node *next;
};
class Queue{
    private:
    node *real;
    node *front;
    public:
    Queue();
    bool isEmpty();
    bool isFull();
    void inserReal(int);
    int viewReal();
    int viewFront();
    void deletFront();
    ~Queue();
    int getCount();
};
Queue::Queue(){
    next=NULL;
    real=NULL;
    front=NULL;
}
bool Queue::isEmpty(){
    return real==NULL;
}
bool Queue::isFull(){

}
void Queue::inserReal(int data){
    node *n=new node;
    n->item=data;
    if(isEmpty){
        front=real=n;
    }
    else{
        real->next=n;
        real=n;
    }
}
int Queue::viewReal(){
    if(isEmpty)
    return -1;
    return real->item;
}
int Queue::viewFront(){
    if(isEmpty)
        return -1;
    if(real==front)
    return front->item;
node *t=real;
  while(t->next!=front){
    t=t->next;
  }
  return front->item;

}
// this is  the can not the complite 
void Queue:;deletFront(){
    if(isEmpty)
    cout<<"Queue is Empty "<<endl;
if(real==front){
    delet []front;
    fron=real=NULL;
}
node *t=real;
while(t->next!=fron){
    t=t->next;
}
t->next=NULL;
}
~Queue::Queue(){
    if(!isEmpty){
        deletFront();
    }
  delet[]next;
}
int Queue::getCount(){
    if(isEmpty)
    return,-1;
  return front+1;
}
int main(){

    return 0;
}