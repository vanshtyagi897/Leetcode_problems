class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount =0;
        for(int i=0;i<sentences.size();i++){
            int count=0;
            string s=sentences[i];
            for(int j=0;j<s.length();j++){

                if(s[j]==' ') count++;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount+1;
    }
};