class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int last = n-1;
        for(int i = n-1; i >= 0; i--){
            if(nums[i] + i >= last){
                last = i;
            }
        }
        return !last;
    }
};