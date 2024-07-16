class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                int y=i+1;
                nums.erase(nums.begin()+y);
                i--;
            }
        }
        // if(nums[nums.size()-2]==nums[nums.size()-1]) nums.erase(nums.begin()+nums.size()-2);
        return nums.size();
        
    }
};


