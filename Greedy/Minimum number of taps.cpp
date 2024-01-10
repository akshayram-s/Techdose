class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>> intervals;
        for(int i=0;i<n+1;i++){
            intervals.push_back({i-ranges[i],i+ranges[i]});
        }
        sort(intervals.begin(),intervals.end());
        int i=0,start=0,end=0;
        int ans=0;
        while(end<n){
            for(;i<intervals.size() && intervals[i][0] <= start; i++){
                end=max(end,intervals[i][1]);
            }                     
            if(start==end)
                return -1;
            
            start=end;
            ans++;
        }
        return ans;
    }
};