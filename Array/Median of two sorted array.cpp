class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        long long int sum=0;
        for(int i=0;i<m;i++){
            sum+=nums1[i];
        }
        for(int j=0;j<n;j++){
            sum+=nums2[j];
        }
        double ans=sum*1.0/(m+n)*1.0;
        return ans;
    }
};