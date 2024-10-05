#include<iostream>
#include<iomanip>
using namespace std;
void sumOfFirstNatureNumber(int number,int &sum){
    int x=number;
    if(x>=0){
        sumOfFirstNatureNumber(x-1,sum);
        sum=sum+x;
        cout<<sum<<endl;
    }
}
void oddNatureNumber(int number,int &sum){
    if(number >=1){
        oddNatureNumber(number-1,sum);
    //   sum=sum+(number*2); // this is problem in the code
         sum=2*number-1;
         cout<<(sum)<<endl;
    }
}
void evenNumber(int number,int &sum){
    if(number==0){
        evenNumber(number-1,sum);
        sum=sum+(number*2);
        cout<<sum<<endl;
    }
}
void factorialCalculate(int number,int &sum){
    if(number<=1)
    return;
factorialCalculate(number-1,sum);
  sum=sum*number;
  cout<<sum<<endl;
}
int sumOfDigit(int number){
    if(number==0)
    return 0;
return (number%10)+sumOfDigit(number/10);

}
void binaryToDecimal(int number){
    if(number >0){
binaryToDecimal(number/2);
printf("%d",number %2);
    }
}

int fibNac(int number){
    if(number==0)
    return 0;
    if(number==1)
        return 1;
    return fibNac(number-1)+ fibNac(number-2);
}
int calHcf(int n1,int n2){
    if(n1>n2)
    if(n1%n2==0)
    return  n2;
else
return calHcf(n1%n2,n2);
else
if(n2%n1==0)
return n1;
else
return calHcf(n2,n2%n1);
}
void calPower(int number){

}
int main(){
    // cout<<"enter the number to print the sum of number "<<endl;
    // int number=5;
    // cin>>number;
    // int sum=1;
    // sumOfFirstNatureNumber(number,sum);
    // oddNatureNumber(number,sum);
    // evenNumber(number,sum);
    // factorialCalculate(number,sum);
    // int number=12345;
    // cout<< sumOfDigit(number)<<endl;
    int number=10;
    binaryToDecimal(number);
    // int number=10;
//    cout<<fibNac(number)<<endl;
   int n1=4;
   int n2=5;
// cout<<calHcf(n1,n2)<<endl;
    return 0;
}