#include<iostream>
#include<iomanip>
using namespace std;
void printCubes(int cubes,int x){

    if(cubes==0)
    return ;
   printCubes (cubes-1);
cout<<cubes*cubes*cubes<<endl;
// cout<<x<<endl;

}

int main(){
 int cubes=10;
  printCubes(cubes,x);
 
    return 0;
}