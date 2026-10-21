class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
       if(is_sorted(s.begin(),s.end())) return 0;
       if(n==2) return -1;
       char maxi = *max_element(s.begin(),s.end());
       char mini = *min_element(s.begin(),s.end());

       if(s[0]==mini || s[n-1]==maxi) return 1;

       if (s[0] == maxi && s[n - 1] == mini) {
            int maxCount = count(s.begin(), s.end(), maxi);
            int minCount = count(s.begin(), s.end(), mini);

            if (maxCount > 1 || minCount > 1) {
                return 2;
            }

            return 3;
        }
        return 2;
    }
};