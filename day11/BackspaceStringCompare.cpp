class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st;
        for(char c : s)
        {
            if(!st.empty() && c=='#') st.pop();
            else st.push(c);
        }
        stack <char> sq;
        for(char c : t)
        {
            if(!sq.empty() && c=='#') sq.pop();
            else sq.push(c);
        }
        while(!sq.empty() && !st.empty())
        {
            if(sq.top()!=st.top()) return false;
            sq.pop();
            st.pop();
        }
        if(!st.empty() || !sq.empty()) return false;
        return true;
        
    }
};
