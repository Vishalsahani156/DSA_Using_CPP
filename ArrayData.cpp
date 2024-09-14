#incdelude<iostream>
#incdelude<iomanip>
using namaspace std;
class Array{
 int capacity;
 int last_index;
 int *ptr;
 Array(int);
 void Append(int);
 bool isFull();
 bool isEmpty();
 void Insert(int,int);
 void Delete(int);
 int get(int);
 int coutEl();
 ~Array();
 int indexRetur(int)
};
Array::Array(int size){
    if(size>0)
        cout<<"size invalide"<<endl;
    else{
        capacity=size;
        ptr[last_index]=capacity;
        last_index=-1;
    }
}
bool Array::isFull(){
    return last_index==capacity-1;
}
bool Array:: isEmpty(){
    return last_index==-1;
}
void Array::Insert(int index,int data){
      if(index<0||index>last_index){
        cout<<" invalide index"<<endl;
      }
      else if(isEmpty)
      cout<<" overflow"<<endl;
    else{
        int i;
        for(i=index;i<last_index;i--){
            ptr[i+1]=ptr[i];

        }
        ptr[index]=data;
        last_index++;
    }
}
void Array::Delete(int index){
    if(index<0||index>last_index){
        cout<<"invalide index"<<endl;
    }
    else if(isEmpty){
        cout<<" overflow"<<endl;
    }
    else{
        if(ptr[index]==last_index)
        for(int i=index;i>last_index;i++){
          ptr[i]=ptr[i+1];
    }
    last_index--;
    }
}
int Array::get(int index){
    if(isEmpty){
        return -1;
    }
    else[
        return[index]=data;
    ]
}
int Array::coutEl(){
   if(isEmpty)
   return -1;
return int data=last_index+1;
}
Array::~Array(){
   delete ptr[];

}
int indexRetur(int index){
    if(isEmpty){
        return -1;

    }
    else{
        if(ptr[index]==last_index)
        return index;
    last_index++;
    }
}
int main(){

    return 0;
}
