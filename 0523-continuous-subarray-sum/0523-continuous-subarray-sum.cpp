class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;

        int prefixSum=0;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            int rem = prefixSum % k;
            
            //if map contains rem
            if(mp.find(rem)!=mp.end()){ 
                // if subarray size is >=2
                if(i-mp[rem] >= 2) return true; 
            }
            //if map does not contains rem    
            else {  
                mp[rem]=i;
            }
        }
        return false;


    }
};