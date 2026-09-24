class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int res=0;
        int zeros=0;
        while(r<n){
            if(nums[r]==0) zeros++;

            //if zeros>1 -> we have to reduce window such that no. of zeros become only one
            while(zeros>1){
                if(nums[l]==0){
                    zeros--;
                }
                l++; //if nums[l]==1
            }
            // no. of zeros become one 
            res=max(res, r-l);

            r++;
        }
        return res;
    }
};