class Solution {
public:
    int secondHighest(string s) {
        int fmax=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))
                fmax=max(fmax,s[i]-'0');
        }
        int smax = -1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]) && (s[i]-'0')!=fmax)
                smax=max(smax,s[i]-'0');
        }
        return smax;

    }
};