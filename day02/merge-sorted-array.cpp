class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());
        int i=0;
        while(n--)
        {
            nums1.push_back(nums2[i]);
            i++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};
