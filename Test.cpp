#include<iostream>
#include<iomanip>
using namespace std;
int fib1(int number){
  if(number==0)
  return 0;
  if(number==1)
  return 1;

  return fib1(number-1)+ fib1(number-2);
}
void odd(int number,int &sum){
  if(number==0)
  return ;
    odd(number-1,sum);
    sum=2*number-1;
     cout<<sum<<endl;
}
void binaryToDecimal(int number){
  binaryToDecimal(number/2);
  cout<<number%2<<endl;
}
int main(){
  int number=10;
  // cout<<fib1(number)<<endl;
  int sum=0;
  // odd(number,sum);
  binaryToDecimal(number);
 
  return 0;
}