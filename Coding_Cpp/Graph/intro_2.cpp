#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;

int main(){
    int v = 5;
    int e = 7;

    unordered_map<int,list<int>> adj;

    vector<vector<int>> edges{
        {0,1},{0,3},{1,2},{1,3},{1,4},{2,4},{4,3}
    };

    int n = edges.size();

    for(int i=0;i<n;i++){
        int u = edges[i][0];
        int vtx = edges[i][1];   
        adj[u].push_back(vtx);
        adj[vtx].push_back(u);
    }

    for(auto i:adj){
        cout<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}