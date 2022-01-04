vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        // map<pair,int>mp;
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        int n=string_list.size();
        for(int i=0;i<n;i++){
            string temp=string_list[i];
            // if(isAnagram()){
                sort(temp.begin(),temp.end());
                // mp[temp]=
                
            // }
            mp[temp].push_back(string_list[i]);
        }
        
        // int j=0;
        for(auto i=mp.begin();i!=mp.end();i++){
            vector<string>temp=i->second;
            ans.push_back(temp);
            // j++;
        }
        return ans;
        
    }