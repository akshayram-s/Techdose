#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void bfs(vector<vector<int>>& graph,int node){
    vector<int>res;
    vector<int>visited(graph.size(),0);
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int val=q.front();
        q.pop();
        res.push_back(val);
        for(auto it:graph[val]){
            if(!visited[it]){
                visited[it]=1;
                q.push(it);
            }
        }
    }
    for(auto num:res){
        cout<<num<<" ";
    }
}

int main() {
    vector<vector<int>>adj{
        {1,2},
        {2},
        {0,3},
        {3}
    };
    vector<int>vis(adj.size(),0);
    bfs(adj,2);
    return 0;
}