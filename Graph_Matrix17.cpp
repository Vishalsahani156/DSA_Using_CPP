#include<iostream>
#include<iomanip>
using namespace std;
class Graph{
    private:
    int v_count;
    int e_count;
    int **adj;
    public:
    void creatGraph(int,int);
    void printGraphMatrix(int v);
};
void Graph::creatGraph(int v_count,int e_count){
    v_count;
    e_count;
    int u;
    int v;
    // this loops is create the adj types poiter in the size of v_count 
    for(int i=0;i<v_count;i++)
        adj=new int*[v_count];
    // creat the arrya in  the size of v_count
    for(int i=0;i<v_count;i++){
        for(int j=0;j<v_count;k++)
        adj[i][j]=int[v_count];
    }
    // inisilaize   the values in the variables 
    for(int i=0;i<v_count;i++){
        for(int j=0;j<v_count;j++)
        adj[i][j]=0;
    }
    for(int k=0;k<v_count;k++){
        cout<<" Enter the node of eage connecte "<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u];
    }
}
void Graph::printGraphMatrix(){   
    
}

