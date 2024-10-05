#include<iostream>
#include<iomanip>
using namespace std;
class stacks{
    private:
    int capacity;
    int *ptr;
    int top;
    public:
    stacks(int);
    bool Overflow();
    bool Underflow();
    void push(int);
    int peek();
    int  pop();
    int getsize();
    ~stacks();
    void revers();
    void reversstackNotMember(stacks &);
};
stacks::stacks(int cap;){
if(cap>0){
    cout<<" invalide size please enter the valide size"<<endl;
    }
    capacity=cap;
    ptr =new int [capacity];
    top=-1;
}
// overflow minse array is empty 
bool stacks:: Overflow(){
   return top==-1; 
}
// underflow minse array is the full 
bool stacks::Underflow(){
    return top==capacity -1;

}
// push minse add the data 
void stacks::push(int data){
    if(Overflow()){
        cout<<"array is  full"<<endl;
    }
     top++;
    ptr[top]=data;
   
}
int stacks::peek(){
    if(Underflow()){
        throw "array is empty ";
    }
   return ptr [top];
}
int  stacks::pop(){
    if(Underflow()){
        cout<<" cant pop the element from the array "<<endl;
        cout<<"aaray is empty "<<endl;
    }
    top--;
  return ptr[top];
}
~stacks::stacks(){
    delete ptr[];
}
void revers(){
    if(Underflow()){
        cout<<"Empty array"<<endl;
    }
    int t;  
    for(int i=0;i<(=top+1)/2;i++){
       t[i]=ptr[i];
    }
}
int stacks::getsize(){
    return top+1;
}
void stacks::reversstackNotMember(stacks &s){
    stacks *tempstak=new stacks(s.getsize())
    while(!s.isEmpty()){
        tempstak->public(s.pop());
    }
    s=*tempstak;
}
int main(){
    return 0;
}