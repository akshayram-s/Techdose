class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums)
            mp[x]++;
        vector<pair<int, int>>v;
        for(auto x:mp) 
            v.push_back({x.second,x.first});
        sort(v.rbegin(),v.rend());
        vector<int>ans;
        for(int i=0;i<k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};