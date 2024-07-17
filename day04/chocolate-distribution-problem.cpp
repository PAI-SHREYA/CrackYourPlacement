//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long j=m-1,i=0;
        long long res=INT_MAX;
        sort(a.begin(),a.end());
        // for(int k=0;k<n;k++) cout<<a[k]<<" ";
        // cout<<endl;
        while(j<n)
        {
            if(res>(a[j]-a[i])) res=a[j]-a[i];
            i++;
            j++;
        }
        return res;
    //code
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
