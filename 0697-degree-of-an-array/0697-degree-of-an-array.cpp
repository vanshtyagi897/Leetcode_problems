class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>firstidx, lastidx, count; //3 maps to store first freq, last freq and freq of each elem
        for(int i=0;i<n;i++){
            if(firstidx.find(nums[i])==firstidx.end()) firstidx[nums[i]]=i; //first occ of each elem
            lastidx[nums[i]]=i; //last occurence of each elem
            count[nums[i]]++; //freq of each elem
        }
        int degree=0;//max freq
        for(auto it: count) degree=max(degree,it.second); 


        int ans = nums.size();
        for(auto it: count){
            if(it.second == degree){
                ans = min(ans, lastidx[it.first]-firstidx[it.first]+1);
            }
        }
        return ans;
       

    }
};