#include <iostream>
#include <iomanip>
using namespace std;
struct node {
    int item;
    int pno;
    node *next;
};
class PQueue{
    private:
    node *start;
    public:
    PQueue();
    void insert(int,int);
    void deletHightPeriority();
    bool isEmpty();
    int getHighestElement();
    int getHighestPeriorityNumber();
    ~PQueue();
};
PQueue::PQueue(){
    start=NULL;
    
}
void PQueue::insert(int data.int pno){
    node *n=new node;
    n->item=data;
    if(start==NULL){
    n->next=NULL;
    start=n;
    }
    node  *t=start;
    else{
        while(t->next!=NULL){
        if(pno>start->pno)
        break;
       t=t->next->next;
        }
    start->next=n;
    start=n;

    }
}
void PQueue:: deletHightPeriority(){
    if(start==NULL)
    throw NULL;
node *t=start;
if(start->next==NULL){
    delete t;
    start=NULL;
}
else{
    start=start->next;
    delete t;
}
}
bool PQueue::isEmpty(){
//     if(start==NULL) //  syntax change logic is same 
//     return true;
//  else{
//     return false;
//  }
return start==NULL; // second syntax  logic is same
}
void PQueue::getHighestElement(){
    if(isEmpty())
    throw NULL;
return pno->item;
}
void PQueue::getHighestPeriorityNumber(){
    if(isEmpty())
    throw NULL;
return 
}
~PQueue::PQueue(){
    while(isEmpty){
        deletHightPeriority();
    }
    cout<<" deallocate  memory  with help of the destructor"<<endl:
}
int main(){

    return 0;
}