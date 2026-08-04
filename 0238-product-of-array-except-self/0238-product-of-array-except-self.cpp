class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);

        //calculate left product for each element
        ans[0] = 1;
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1] * nums[i-1]; 
        }
        //calculate right product -> final ans
        int rightProd = 1;
        for(int r = n-1; r>=0; r--){
            ans[r] = rightProd * ans[r];
            rightProd *= nums[r];
        }
        return ans;
    }
};