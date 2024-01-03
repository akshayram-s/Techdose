class Solution {
public:
    void solve(int source,int target,vector<vector<int>>& graph,vector<vector<int>>& res,vector<int> route){
        if(source==target){
            route.push_back(source);
            res.push_back(route);
        }
        route.push_back(source);
        for(auto itr:graph[source]){
            solve(itr,target,graph,res,route);
        }
    }
        
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>route;
        solve(0,graph.size()-1,graph,res,route);
        return res;
    }
};