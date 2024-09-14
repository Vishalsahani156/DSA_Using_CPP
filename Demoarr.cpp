#include<iostream>
#include<iomanip>
using namespace std;
class arr{
    private:
    int capacity;
    int lastindex;
    int *ptr;
    public:
    arr(int);
    bool isEmty();
    bool isFull();
    void append(int);
    void insert(int,int);
    void edit(int,int);
    void deletSp(int);
    int  get(int);
    int coutel();
    ~arr();
    int returnID();
};
arr::arr(int size){
    if(size>0)
    cout<<"invalide size enter "<<endl;
    capacity=size;
    ptr=new int[capacity];
    lastindex==-1;

}
bool arr::isEmty(){
    return lastindex==capacity-1;
}
bool arr::isEmty(){
    return lastindex==-1;
}
void arr::append(int data){
    if(isFull){
        cout<<"array is full "<<endl;
    }
    lastindex++;
    ptr[capacity]=data;


}
void arr::insert(int data,int index){
    if(isEmpty()){
        cout<<"overflow"<<endl;
    }
    if(capacity>index){
        for(int i=index;i>=lastindex;i--){
            ptr[i+1]=ptr[i];
        }
        lastindex++;
        
    }
    cout<<"user enter the valide index"<<endl;
}
void arr::edit(int data,int index){
    if(isEmpty()){
        cout<<"overflow array "<<endl;

    }
    for(int i=0;i<lastindex;i++){
        if(ptr[i]==ptr[index]){
            ptr[index]=data;
        }
    }
}
void arr::deletSp(int index){
     if(isEmpty()){
        cout<<"overflow"<<endl;
     }
     
}
int arr::get(int index){
    if(isEmpty())
        return -1;
    return [index]=data;
    
}
int arr::coutel(){
    return lastindex+1;
}
~arr::arr(){
    delete[]ptr;
}
int arr::returnID(int index){
   if(isEmpty){
    return -1;
   }
   else{
     if(ptr[index]==lastindex)
     return index;
    lastindex--;
   }
}
int main(){

    return 0;
}