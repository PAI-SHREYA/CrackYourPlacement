//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int longestCommonSubstr(string s1, string s2) {
        int res=0;
        int arr[s1.length()+1][s2.length()+1];
        for(int i=0;i<s1.length()+1;i++)
        {
            for(int j=0;j<s2.length()+1;j++)
            {
                if(i==0 || j==0)
                  arr[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                {
                    arr[i][j]=arr[i-1][j-1]+1;
                    res=max(res,arr[i][j]);
                }
                else arr[i][j]=0;
            }
        }
        return res;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
