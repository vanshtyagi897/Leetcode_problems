class Solution {
public:
    long long countCommas(long long n) {
        long long ans =0;
        long long start=1000;
        long long comma=1;
        
        while(start<=n){
          long long end = min(n, 1000*start-1);
          long long count = end - start+1;
          ans+=count*comma;
          start=start*1000;
          comma++;

        }
        
        return ans;
    }
};