class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>output;
        int size=nums.size();
        for (int i=0;i<size;i++){
            int j=i+1;
            int k=size-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                        j++;
                    while(j<k && nums[k]==nums[k+1])
                        k--;
                } 
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto tri:s)
            output.push_back(tri);
        
        return output;
    }
};