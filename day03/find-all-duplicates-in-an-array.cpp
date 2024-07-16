class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            nums[nums[i]-1]=-1*nums[nums[i]-1];
            if(nums[nums[i]-1]>0) ans.push_back(nums[i]);
        }

        return ans;
        
    }
};
