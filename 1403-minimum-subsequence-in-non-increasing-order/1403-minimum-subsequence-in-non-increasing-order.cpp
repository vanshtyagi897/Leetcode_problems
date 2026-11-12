class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        
        int total=0;
        for(int x: nums) total+=x;

        vector<int>ans;
        int sum=0;
        for(int x: nums){
            sum+=x;
            ans.push_back(x);
            if(sum>total-sum){
                break;
            }
        }
        return ans;
    }
};