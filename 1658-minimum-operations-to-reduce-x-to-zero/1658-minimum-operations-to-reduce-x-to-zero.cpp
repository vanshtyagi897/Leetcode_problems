class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // find the longest subarray whose sum = totalsum-x
        int n= nums.size();
        long long totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        
        
        int len=0;
        int l=0,r=0;
        int target = totalSum-x; //subarray with target as sum
        if(target==0) return n;
        long long sum=0;
        while(r<n){
            sum+=nums[r];

            //if sum>target
            while(l<=r && sum>target){
                sum-=nums[l];
                l++;
            }

            if(sum==target){
                len=max(len, r-l+1);
            }
            r++;
        }
        
        if(len!=0) return n-len;
        return -1;

    }
};