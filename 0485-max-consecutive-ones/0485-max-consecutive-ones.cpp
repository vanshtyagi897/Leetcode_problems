class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int ans=0,ones=0;
        int r=0;
        while(r<n){
            if(nums[r]==1) ones++;
            ans=max(ans,ones);
            if(nums[r]==0) ones=0;
            r++;
        }
        return ans;
    }
};