class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        unordered_map<int,int>mp;
        int minLen=INT_MAX;
        for(int i=0;i<n;i++){
            if(mp.find(cards[i])!=mp.end()){
                int len = i-mp[cards[i]]+1;
                minLen=min(minLen, len);
            }
            mp[cards[i]]=i;
           
        }
        return minLen==INT_MAX? -1: minLen;
    }
};