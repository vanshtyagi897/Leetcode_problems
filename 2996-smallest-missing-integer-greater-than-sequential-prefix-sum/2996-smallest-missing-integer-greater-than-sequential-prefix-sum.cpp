class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int j=1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]+1){
                sum+=nums[j];
                j++;
            }else{
                break;
            }
        }
        unordered_set<int>s;
        for(int x: nums){
            s.insert(x);
        }
        while(s.find(sum)!=s.end()){
            sum++;
        }
        return sum;
    }
    
};