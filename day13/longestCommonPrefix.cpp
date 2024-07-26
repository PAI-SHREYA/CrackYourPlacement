class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string f=strs[0],l=strs[n-1];
        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++)
        {
            if(f[i]!=l[i]) return ans;
            ans+=f[i];
        }
        return ans;
        
    }
};
