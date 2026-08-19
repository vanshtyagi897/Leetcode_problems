class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++){//number starting with i
            int num = 0;
            for(int digits = i;digits<=9;digits++ ){
                num = num*10 + digits;
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};