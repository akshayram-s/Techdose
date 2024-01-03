class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        for(int i=1;i<size;i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int ind=0,res=0;
        while(ind<size-1){
            res++;
            ind=nums[ind];
        }
        return res;
    }
};