// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // code here
        // int 0;
        // int x1=l1[0];
        // int y1=l1[1];
        
        // int x2=l2[0];
        // int y2=l2[1];
        int counterx=0;
        int countery=0;
        
        if(r1[0]>r2[0]){
            // counterx=r1[0];
            if(r2[0]<l1[0]){
                return 0;
            }
        }
        else{
            // counterx=r2[0];
             if(r1[0]<l2[0]){
                return 0;
            }
        }
        
        if(l1[1]>l2[1]){
            // countery=l1[1];
            if(l2[1]<r1[1]){
                return 0;
            }
        }
        
        else{
            // countery=l2[1];
            if(l1[1]<r2[1]){
                return 0;
            }
        }
        
        
        return 1;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends