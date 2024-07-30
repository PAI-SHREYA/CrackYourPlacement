class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxCurr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxCurr<i) return false;
            maxCurr=max(maxCurr,i+nums[i]);
        }
        return true;
        
    }
};
