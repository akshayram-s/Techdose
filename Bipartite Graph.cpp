class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i] == -1){
                if(!check(i,0,visited,graph))
                    return false;
            }
        }
        return true;
    }
    
    bool check(int start, int color, vector<int> &visited, vector<vector<int>> &graph){
        visited[start] = color;
        for(auto it:graph[start]){
            if(visited[it] == -1){
                if(!check(it, !color, visited, graph))
                    return false;
            }
            else if(visited[it] == color)
                    return false;
        }
        return true;
    }
};