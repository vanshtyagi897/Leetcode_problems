class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0, r=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        while(r<s.size()){
            mp[s[r]]++;
            while(mp[s[r]]>2){
                mp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};