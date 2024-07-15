class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long int product =1;int zero=0;
        vector<long long> res;
        for(int i=0;i<nums.size();i++)
        { 
            if(nums[i])
            {
                product*=nums[i];
            }
            if (nums[i]==0) zero++;
        }
       for(int i=0;i<n;i++)
       {
           if(!zero)
           res.push_back(product/nums[i]);
           else
           {
               if(zero==1) 
               {
                   if(nums[i]) res.push_back(0);
                   else res.push_back(product);
               }
               else
               {
                   res.push_back(0);
               }
           }
       }
       return res;
        //code here        
    }
};
