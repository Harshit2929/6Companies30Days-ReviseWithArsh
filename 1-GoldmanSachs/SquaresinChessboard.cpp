
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  typedef long long int ll;
    long long squaresInChessBoard(long long n) {
        // code here
        ll ans=((ll)((n)*(n+1))*(2*n+1))/6;
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends