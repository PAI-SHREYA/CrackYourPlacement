class Solution {
public:
    int maxProduct(vector<int>& nums) {
       long double maxi=-99999999999999;
       int j=0;
        long double product1=1,product2=1;
        while(j<nums.size())

        {
            if(product1==0) product1=1;
            if(product2==0) product2=1;
            product1*=(long double)nums[j];
            product2*=(long double)nums[nums.size()-1-j];
             maxi=max(maxi,max(product1,product2));
            // if(product==0) product=1;
            
           
            j++;


        }
        return maxi;
        
    }
};
