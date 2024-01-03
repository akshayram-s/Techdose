class Solution {
public:
    int uniqueLetterString(string s) {
       int n = s.size();
        vector<vector<int>> hash(26);
        for(int i = 0; i < 26; i++) 
            hash[i].push_back(-1);

        for(int i = 0; i < n; i++) 
            hash[s[i] - 'A'].push_back(i);

        for(int i = 0; i < 26; i++) 
            hash[i].push_back(n);

        long long count = 0;
        for(int i = 0; i < 26; i++){
            for(int j = 1; j < hash[i].size()-1; j++){
                count += (hash[i][j] - hash[i][j-1])*(hash[i][j+1] - hash[i][j]);
            }
        }

        return count; 
    }
};