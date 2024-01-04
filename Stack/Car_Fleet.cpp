class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n= position.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({position[i],speed[i]});
        }

        sort(v.begin(), v.end());
        stack<double> stk;
        vector<double> time(n);

        for(int i=0;i<n;i++){
           time[i] = (double)(target-v[i].first) / (double)v[i].second;
        }
        
        for(auto i=0;i<time.size();i++){
            while(stk.size() && stk.top()<=time[i]){
                stk.pop();
            }
            stk.push(time[i]);
        }
        
        return stk.size();
    }
    
};