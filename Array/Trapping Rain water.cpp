class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        int left[size];
        int right[size];
        left[0]=height[0];
        right[size-1]=height[size-1];
        for(int i=1;i<size;i++){
            left[i]=max(left[i-1],height[i]);
        }
        for(int i=(size-2);i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        int sum=0;
        for(int i=0;i<size; i++){
            sum+=(min(left[i],right[i]))-height[i];
        }
        return sum;
    }
};