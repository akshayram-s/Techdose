class Solution {
public:
    void sortColors(vector<int>& nums) {
        int begin=0,m=0,end=nums.size()-1;
        while(m<=end){
            if(nums[m]==0){
                swap(nums[begin],nums[m]);
                begin++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else if(nums[m]==2){
                swap(nums[m],nums[end]);
                end--;
            }
        }
    }
};