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
    return front==cap-1;
}
bool Queue::underfrow(){  // this minse can not full  the queue 
   return real ==-1;
}
void Queue::insertReal(int data){
    if(overflow())
    cout<<" Queue is full "<<endl;
   else{
    ptr[real]=data;
    real=front;

   }
}
int Queue::viewReal(){
    if(underfrow){
        return -1;
    }
    return ptr[real];
}
int Queue::viewFront(){
    if(underfrow())
    return -1;
  return ptr[front];
}
void Queue::deleteFront(){
    if(underfrow())
    {
        cout<<"Queue is empty can not delete the elements "<<endl;
        
    }
    else{
        int data=ptr[front];
        int temp;
        if(front==real){
            delete [front];
            real=-1;
            real=front;
            return data;
        }
        temp=front;
        delete[temp];
        front--;
        return data;
    }
}
~Queue::Queue(){
    if(underfrow()){
        deleteFront();
    }
    delete []ptr;
}
int Queue:: coutElement(){
    return front+1;
    
}
int main(){
    return 0;
}