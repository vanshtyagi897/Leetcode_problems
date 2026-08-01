class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m+n;

        int curr = 0;
        int prev = 0;

        int i=0,j=0;

        for(int count=0; count<=total/2; count++){
            prev = curr;
            if(i<m && j<n){ //comparing elements of both nums1 and nums2
                if(nums1[i]<nums2[j]) curr = nums1[i++];
                else curr = nums2[j++];
            }
            else if(i<m) curr = nums1[i++]; // j is out of bounds
            else curr = nums2[j++]; // i is out of bounds
        }
        if(total%2==1) return curr;
        else return (curr+prev)/2.0;
    }
};