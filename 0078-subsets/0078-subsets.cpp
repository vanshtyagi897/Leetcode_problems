class Solution {
public:
    void fun(vector<int>&nums, int i, vector<int>&temp, vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        // not taking i
        fun(nums,i+1,temp,ans);

        //taking i
        temp.push_back(nums[i]);
        fun(nums,i+1,temp,ans);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        vector<int>temp;
        
        fun(nums,i,temp,ans);
        return ans;

    }
};