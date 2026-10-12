class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxSum=0;
        int l=0,r=0;
        unordered_set<int>st;
        while(r<n){
             sum+=nums[r];

            while( st.count(nums[r]) ){
                st.erase(nums[l]);  
                sum-=nums[l];
                l++;
            }
          
            st.insert(nums[r]);
            maxSum=max(maxSum, sum);
            r++;
        }
        return maxSum;
    }
};