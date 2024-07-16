class Solution {
public:
    int strStr(string haystack, string needle) {
        int p1=0,p2=0;
        while(p1<haystack.size())
        {
            int s=p1;
            // while(p2<needle.size())
            // {
               while(haystack[p1]==needle[p2] && p2<needle.size())
            {
                p1++;
                p2++;
            }
           
                // p2=0;
                // break;
            

            // }
            if(p2==needle.size())
            {
                return s;
            }
            p1=s+1;
            p2=0;
            
           
            
        }
        // cout<<p1<<endl;
        return -1;
        
    }
};
