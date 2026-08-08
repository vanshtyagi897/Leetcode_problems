class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum=0;
        int maxSum= nums[0];
        for(int i=0;i<n;i++){
            currSum+=nums[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};
// kadane's algo says whenever currSum becomes -ve, re-initialize it with 0, cuz me want our currSum to be maximum