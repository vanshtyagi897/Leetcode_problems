class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>mp;
        mp[0]=1;

        int count=0;
        int prefixSum=0;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];//running sum
            int rem = prefixSum%k;//calculate remainder
            if(rem<0) rem+=k;//making remainder +ve is it is negative

            // Every previous same remainder forms
            // one valid subarray
            count += mp[rem];

            mp[rem]++;//store freq of this rem in map
        }
        return count;
    }
};