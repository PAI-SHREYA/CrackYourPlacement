class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      set <int> s;
      int i=0;
      for(i=0;i<nums.size();i++)
      {
        if(s.count(nums[i])) break;
        else s.insert(nums[i]);
      }
      return nums[i];
    }
};


