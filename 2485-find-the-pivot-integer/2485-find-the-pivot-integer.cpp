class Solution {
public:
    int pivotInteger(int n) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
       
        for(int i=0;i<n;i++){
            int lsum=0;
            for(int j=0;j<=i;j++){
                lsum+=arr[j];
            }
            int rsum=0;
            for(int k=i;k<n;k++){
                rsum+=arr[k];
            }
            if(lsum==rsum) return arr[i];
        }
        return -1;

    }
};