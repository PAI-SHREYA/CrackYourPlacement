class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int rem=amount;
        int count=0;
        for(int i=coins.size()-1;i>=0;i--)
        {
            if(rem==0) return count;
            if(coins[i]<=rem && coins[i]%rem==0) return count+(coins[i]/rem);
            else
            {
                if(coins[i]<rem)
                count+=rem/coins[i];
                rem-=coins[i]*(rem/coins[i]); 
            }
        }
        if(rem==0) return count;
        return -1;
        
    }
};
