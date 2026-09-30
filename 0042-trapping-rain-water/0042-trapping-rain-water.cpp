class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int idx=0;
        int maxi = height[0];
        for(int i=1;i<n;i++){
            if(height[i]> maxi){
                maxi=height[i];
                idx=i;
            }
        }
        int sum=0;
        int leftmax=0;
        for(int i=0;i<idx;i++){
            if(leftmax > height[i]){
                sum += leftmax - height[i];
            }
            else{
                leftmax = height[i];
            }
        }
        int rightmax = 0;
        for(int i=n-1; i>idx; i--){
            if(rightmax > height[i]){
                sum+= rightmax - height[i];
            }
            else{
                rightmax = height[i];
            }
        }
        
        return sum;
    }
};