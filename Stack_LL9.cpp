#include<iostream>
#include<iomanip>
struct node{
using namespace std;
    node *next;
    int item;
};
class Stack{
    private:
  node *top;
    public:
    Stack();
    void push(int);
    bool isEmpty();
    int peek();
    int pop();
    ~Stack();
    int revers();
    bool  palindrom(int);

};
Stack::Stack(){
    top=NULL;

}
void Stack::push(int data){
    node *n =new node;
    n->item=data;
    n->next=top;
    top=n;
}
bool Stack::isEmpty(){
    return top==NULL;

}
void Stack::peek(){
    if(isEmpty()){
    return -1;
    }
    else{
        return top->item;

    }
}
int Stack::pop(){
    if(isEmpty){
        return -1;

    }
    int data=top->item;
    node *t;
    t=top;
    top=top->next;
    delete[]t;
    return top->item;
}
~Stack::Stack(){
    while(isEmpty){
        pop();
    }
    delete[]top;

}
int Stack::revers(){
    if(isEmpty()){
       return -1;
    }
    while(top!=NULL){
        int k=top->item;
        pop();
    }
    return k;
}
 bool Stack::palindrom(int x){
 int l,y;
 Stack s;
 y=x;
 l=0;
 while(y){
    y=y/10;
    l++
 };
  for(int i=0;i<l/2;i++){
    s.push(y%10)
    y=y/10;

  }
  if(l%2)// odd number 
  x=x/10;
  for(int i=0i<l/2;i++){
    if(x%10!=s.push())
    return false;
  }
  return true;
}
int main(){

    return 0;
}