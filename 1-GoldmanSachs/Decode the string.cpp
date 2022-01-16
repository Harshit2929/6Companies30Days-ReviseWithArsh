// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

pair<string,int> helper(string s,int curr){
    
    int n=s.length();
        pair<string,int>ans;
            int size=0;
            for(int i=curr;i<n;i++){
                //break case
                if(s[i]==']'){
                    ans.second=i;
                    break;
                }
                
                if(s[i]>='a'&&s[i]<='z'){
                    ans.first.push_back(s[i]);
                }
            
                if(s[i]>='0'&&s[i]<='9'){
                    size=size*10+(s[i]-'0');  
                    if(s[i+1]>='0'&&s[i+1]<='9'){
                          continue;
                    }
                       
                    // size=size+(s[i]-'0');
                    
                
                    //temp=ca
                    pair<string,int> subSoln=helper(s,i+2);
                    i=subSoln.second;
                
                    // int k=0;
                    // for( k=i+2;s[k]!=']';k++){
                    //     // temp.push_back(s[k]);
                    // }
                    // i=k;
                    // curr=k;
                        // cout<<subSoln.first<<endl;
                        // cout<<size<<endl;
                    for(int j=0;j<size;j++){
                    
                        ans.first.append(subSoln.first);
                    }
                    size=0;
                }
                
                
            }
            return ans;
    
}




    string decodedString(string s){
        // code here
        pair<string,int> ans=helper(s,0);
        
            
    
            
            return ans.first;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends