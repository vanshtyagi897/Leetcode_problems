class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;
        for(int x: nums){
           if(x>first ){
            third = second;
            second = first;
            first = x;
           }
           else if(x>second && x!=first ){
            third = second;
            second = x;
           }
           else if(x>third && (x!=first && x!=second)){
            third = x;
        
           }
        }
        if(third==LLONG_MIN) return first;
        return third;

    }
};