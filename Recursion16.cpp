#include<iostream>
#include<iomanip>
using namespace std;
void sumOfFirstNatureNumber(int number){
    int sum=0;
    if(number>=0){
        sumOfFirstNatureNumber(number-1);
        sum=+number;
        cout<<sum<<endl;
    }
}
int main(){
    cout<<"enter the number to print the sum of number "<<endl;
    int number;
    cin>>number;
    sumOfFirstNatureNumber(number);

    return 0;
}