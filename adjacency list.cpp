#include <bits/stdc++.h>
using namespace std;
class graph{
    int V;
    list<int> *adjList;
    public:
    graph(int v){
        V =v;
        adjList = new list<int>[V];
    }
    void addNode(int u,int v,bool bidir = true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
    }
    void printTree(){
        for(int i=0;i<V;i++){
            cout<<i<<"->>";
            for(int node : adjList[i]){
            cout<<node<<",";
        }
        cout<<endl;
        }   
    }
};
int main() {
    graph g(4);
    g.addNode(0,1);
    g.addNode(0,2);
    g.addNode(0,3);
    g.addNode(1,3);
    g.addNode(2,3);
    g.printTree();
}
