class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int index= abs(nums[i]);
            if(nums[index-1]<0) ans.push_back(abs(nums[i]));
            else nums[index-1]= -nums[index-1];
            //if(nums[nums[i]-1]>0) ans.push_back(nums[i]);
        }

        return ans;
        
    }
};
