class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'  ) return true;
        else return false;
    }

    int maxVowels(string s, int k) {
        int l=0,r=0;
        int count=0;
        int maxCount=0;
        while(r<s.size()){    
            if(isvowel(s[r])) count++;

            if(r-l+1>k){
                if(isvowel(s[l])) count--;
                l++;
            }
            if(r-l+1==k){
                maxCount=max(maxCount,count);
            }

            r++;
        }
        return maxCount;
    }
};