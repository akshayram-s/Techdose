class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr.push_back(nums[0]);
        int size=nums.size();
        for(int i=1;i<size;i++)
            arr.push_back(nums[i]+arr[i-1]);
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return arr[right];
        }
        return arr[right]-arr[left-1];
    }
};