class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        //prefix sum
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<n;i++){
            int rsum = nums[n-1] - nums[i];
            int lsum = (i==0)? 0 : nums[i-1];
            if(rsum==lsum) return i;
        }
        return -1;
    }
};