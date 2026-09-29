class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        leftmax[0]=0;
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i-1]);
        }
        rightmax[n-1]=0;
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i+1]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int minHeight=min(leftmax[i],rightmax[i]);
            if(minHeight-height[i]>=0){
                sum+=(minHeight-height[i]);
            }
        }
        return sum;
    }
};