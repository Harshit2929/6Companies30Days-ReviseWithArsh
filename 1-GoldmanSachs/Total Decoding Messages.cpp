#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	#define  m 1000000007
		int helper(string str,int n,vector<int>&dp){
		    
		    
		    
		    if(n==0 || n==1){
		        return 1;
		    }
		    
		    if(str[0]=='0'){
		        return 0;
		    }
		    
		    if(dp[n]!=-1){
		        return dp[n];
		    }
		    
		    int ans=0;
		    if(str[n-1]>'0'){
		     ans=helper(str,n-1,dp);
		    }
		    
		    if(str[n-2]=='1'||str[n-2]=='2'&&str[n-1]<'7'){
		      //  ans++;
		        ans=((ans%m)+(helper(str,n-2,dp)%m))%m;
		    }
		    dp[n]=ans%m;
		    return dp[n];
		  //  int ans=helper()
		    
		    
		}
		
		
		int CountWays(string str){
		    // Code here
		   
		    int i=0;
		    int n=str.length();
		    vector<int>dp(n+1,-1);
		    if(n==0 || (n==1 && str[0]=='0')){
		        return 0;
		    }
		    int ans=helper(str,n,dp);
		    return ans;
		  //  if(str==0)
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends