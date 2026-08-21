class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;

        vector<int> freq1(26,0), freq2(26,0);
        for(char c: s1){
            freq1[c-'a']++;
        }
        int l=0;
        for(int r=l;r<s2.length();r++){
            freq2[s2[r]-'a']++;

            if(r-l+1 > s1.length()){
                freq2[s2[l]-'a']--;
                l++;
            }

            if(r-l+1==s1.length()){
                if(freq1 == freq2) return true;
            }
        }
        return false;
    }
};