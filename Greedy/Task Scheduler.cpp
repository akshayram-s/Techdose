class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(!n){
            return tasks.size();
        }
        unordered_map<char,int>mp;
        int count = 0;
        for(auto num : tasks)
        {
            mp[num]++;
            count = max(count, mp[num]);
        }
        
        int ans = (count-1)*(n+1);
        for(auto num : mp) 
            if(num.second == count) 
                ans++;
        
        return max((int)tasks.size(), ans);
        
    }
};