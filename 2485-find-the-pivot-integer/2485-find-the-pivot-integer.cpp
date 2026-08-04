class Solution {
public:
    int pivotInteger(int n) {
        int totalSum= n*(n+1)/2;
        int lsum=0, rsum=0;
        for(int i=1;i<=n;i++){
            lsum += i;
            rsum = totalSum - lsum + i;
            if(lsum == rsum) return i;
        }
        return -1;

    }
};