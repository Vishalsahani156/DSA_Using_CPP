#include<iostream>
#include<imanip>
using namespace std;
class Queue{
    private:
    int cap;
    int front ;
    int real;
    int *ptr;
    public:
    Queue(int);
    bool overflow();
    bool underfrow();
    void insertReal(int);
    int viewReal();
    int viewFront();
    void deleteFront();
    ~Queue();
    int coutElement();
};
Queue::Queue(int size){
    if(size>0)
    cap=size;
    ptr=new int[cap];
    front=-1;
    real=-1;    
}
bool::Queue::overflow(){ // this minse queue is full 
return real==cap-1;
}
bool Queue::underfrow(){  // this minse can not full  the queue 
   return real==-1;
}
void Queue::insertReal(int data){
    if(front==0 &&real==cap-1 || real>front-1)
       cout<<"overflow"<<endl;
    else if(real==-1){
     real=front++;
     ptr[real]=data;
    }
    else if(real>=cap-1){
        real++;
        ptr[real]=data;
    }
    else{
        real=0;
        ptr[real]=data;
    }
}
int Queue::viewReal(){
    if(underfrow())
    return -1;
return ptr->real;
}
int Queue::viewFront(){
    if(underfrow())
    return -1;
  return ptr->front;
}
void Queue::deleteFront(){
    if(underfrow())
    {
        cout<<"Queue is empty can not delete the elements "<<endl;
        
    }
    int data=ptr->front;
    else if(real==front){
       real=front=-1;
    return data;
    }
    else{
        front++;
        return data;
    }

}
~Queue::Queue(){
    if(!(front==0&&real==cap-1||real>front-1)){
        deleteFront();
    }
    delete []ptr;
}
int Queue:: coutElement(){
    int getcoutel=0;
    if(!underfrow()){
        getcoutel++;
        deleteFront();
    }
    return getcoutel;
    // second logic 
    return real+1;
}
int main(){
    return 0;
}