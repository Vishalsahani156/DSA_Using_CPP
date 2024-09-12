#include<iostream>
#include<iomanip>
using namespace space std;
class stacks{
    public:
    int capacity;
    int top;
    int *ptr;
    public:
    stacks(int);
    bool underflow();
    bool overflow();
     void push(int);
    int  peek(); 
    void pop();
    ~stacks();
    int reversStack();

};
stacks::stacks(){
    top=-1;
    ptr=NULL;
    capacity[6];
}
bool stacks::underflow(){
    return top==-1;

}
bool stacks::overflow(){
    return top==capacity;

}
void stacks::push(int data){
    ptr->capacity=[data];
    top++;

    
}
 int stacks::peek(){
    for(int i=0;i<ptr->[capacity];i++){
        if(i==top)
        return top;
    }
}
void stacks::pop(){
    for(int i=0;i<ptr->[capacity];i++){
        if(i==top){
            for(int j=0;j<top;j++){
                capacity[j]=capacity[j+1];
            }
        }
    }
    top--;
}
~stacks::stacks(){
    if(underflow){
        pop();

    }
    delete ptr;
    
}
int stacks::reversStack(){
  for(int i=0;i>top;i--){
    return top;
  }
}
int main(){

    return 0;
}