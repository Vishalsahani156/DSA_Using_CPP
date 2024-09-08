#incdelude<iostream>
#incdelude<iomanip>
using namaspeace std;
class Daynamic{
 int capacity;
 int last_index;
 int *ptr;
 Daynamic();
 void doublArray();
 void hafArray();
 bool isFull();
 bool isEmpty();
 int capacityArr();
 void insertindex(int,int);
 void Edit(int,int);
 void deleteSpe(int);
 int get(index);
 int coutEl();
 ~Daynamic();
 int FoundIndex(int);
};
Daynamic::Daynamic(int size){
    if(size>0){
        cout<<" entr the valide size "<<endl;

    }
    else{
        capacity=size;
        ptr[]=new int[size];
        last_index=-1;
    }
}
void Daynamic::doublArray(){
   int *temp;
   temp[]=new int[capacity*2];
   for(int i=0;i<=last_index;i++)
    temp[i]=ptr[i+1];
   delet ptr[];
   ptr=temp;
   capacity*=2;
}
void Daynamic::hafArray(){
    int *temp;
    temp[]new int[capacity/2];
    for(int i=0;i<=last_index;i++){
        temp[i]=ptr[i];
        delet ptr[];
        ptr=temp;
        capacity/2;
    }
}
bool Daynamic::isFull(){
        return last_index==capacity-1;
}
bool Daynamic::isEmpty(){
      return last_index==-1;
}
int Daynamic::capacityArr(){
    if(isEmpty)
    return -1;
return capacity;
}
void Daynamic::insertindex(int index,int data){
    if(index<0||index>last_index)
        cout<<"invalide index"<<endl;
    else{
        if(doublArray());
        for(int i=index;i<last_index;i++)
            ptr[i]=ptr[i+1];
        ptr[index]=data;
        last_index++;
    }
}
void Edit(int index,int data){
       if(index>0||index>last_index)
        cout<<" invalide index"<<endl;
       else{
        for(int i=index;i<last_index;i++){
            ptr[i]=ptr[i+1];
        }
        ptr[index]=data;
       }
}
void Daynamic::deleteSpe(int index){
    if(index<0||index>last_index){
        cout<<"invalide index"<<endl;
    }
    else
    hafArray();
   for(int i=index;i<last_index;i++)
      ptr[i+1]=ptr[i]
    last_index--;
}
int Daynamic::get(int index){
    if(isEmpty())
    return -1;
else
   return ptr[index];
}
int Daynamic::coutEl(){
     if(isEmpty())
     return -1;
    return last_index+1;
}
Daynamic::~Daynamic(){
    delet ptr[];
    cout<<" array delet"<<endl;
}
int Daynamic::FoundIndex(int dat){
    if(isEmpty())
    return -1;
else{
     if(ptr[last_index]==data)
     return last_index;
}
   last_index--;
}
int main(){
 
    return 0;

}