#include <bits/stdc++.h>
class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int ans=INT_MAX;
        while(r<n){            
            sum+=nums[r++];                
                while(sum>=k){
                    ans=min(ans,r-l);
                    sum=sum-nums[l++];                    
                }                
            }        
            
        if(ans==INT_MAX){
            return 0;
        }
        return ans;                  
        
    }
};