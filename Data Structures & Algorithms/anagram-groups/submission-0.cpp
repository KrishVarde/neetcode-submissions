class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> um;
        
        for(string str : strs){
            string key = str;
            sort(key.begin(),key.end());
            um[key].push_back(str);
        }
        
        vector<vector<string>> ans;

        for(auto pair : um){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
