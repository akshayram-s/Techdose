class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        int size=s.size();
        for(int i=0;i<size;i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end(),[](pair<int,char>p1,pair<int,char>p2){return p1.first>p2.first;});
        
        string res="";
        for(auto var:vec){
            res+=string(var.first,var.second);
        }
        return res;
    }
};