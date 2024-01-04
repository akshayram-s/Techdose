class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        vector<vector<string>> res;
        for(auto i:strs){
            string temp=i;
            sort(i.begin(),i.end());
            bool got=false;
            if(mp[i]){
                res[mp[i]-1].push_back(temp);
            }
            else{
                res.push_back({temp});
                mp[i]=res.size();
            }
        }
        return res;   
    }
};