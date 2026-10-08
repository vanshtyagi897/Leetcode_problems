class Solution {
public:
    int countGoodSubstrings(string s) {
        //k=3
        //no. of substr that have no repeated chars
        int l=0,r=0;
        int count=0;
        while(r<s.length()){
           
            if(r-l+1>3){
                l++;
            }
            if(r-l+1==3){
                if(s[l]!=s[l+1] && s[l]!=s[r] && s[l+1]!=s[r]){
                    count++;
                } 
            }
            r++;
         }
         return count;

    }
};