class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string res ="";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1 > res.size()) res = s.substr(i,j-i+1);
                }
            }
        }
        return res;
    }
};