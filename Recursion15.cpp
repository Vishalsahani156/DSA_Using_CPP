#include<iostream>
#include<iomanip>
using namespace std;
void printNaturNumber(int number){
    if(number==0)
    return;
 printNaturNumber(number -1);
 cout<<number<<endl;
}
void printNaturNumberReversOrder(int number){
    if(number<=0)
    return;
cout<<number<<endl;
printNaturNumberReversOrder(number-1);
}
void oddNaturNumber(int number){
   if(number<1)
   return ;
oddNaturNumber(number-2);
if(number%2!=0)
cout<<number<<endl;
}
void evenNumber(int even){
    if(even<1)
    return ;
    evenNumber(even-1);
    if(even%2==0)
cout<<even<<endl;
}
void evenNumberRevers(int even){
    if(even<1)
    return ;
if(even%2==0)
cout<<even<<endl;

evenNumberRevers(even-1);
}
 void natureNumberSqure(int squre){
    if(squre<=0)
    return ;
//  this is the firs logic
natureNumberSqure(squre-1); 
cout<<squre*squre<<endl;
// this  write the second logics 
//  return  squre* natureNumberSqure(squre-1);
// cout<<squre<<endl;

}
int natureNumberSqureRevers(int squre){
    if(squre<=1)
    return 1;
//  this is the firs logic
   cout<<squre*squre<<endl;
   natureNumberSqure(squre-1); 
}
void printCubes(int cubes){
    if(cubes<=1)
    return ;
printCubes(cubes-1)
cout<<cubes*cubes*cubes<<endl;

}
int main(){
    int number=10;
    // printNaturNumber(number);
    // printNaturNumberReversOrder(number);
    // oddNaturNumber(number);
    int even=10;
    // evenNumber(even);
    // evenNumberRevers(even);
    int squre=10;
    // natureNumberSqure(squre);
    // cout<<natureNumberSqure(squre)<<endl;
    int reversNum=9;
    // natureNumberSqureRevers(reversNum);
    int cubes=5;
    printCubes(cubes);

}