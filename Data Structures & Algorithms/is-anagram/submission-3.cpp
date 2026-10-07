class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um1;
        unordered_map<char,int> um2;
        for(char c : s){
            if(um1.find(c) == um1.end()){
                um1[c] == 1;
            }
            else{
                um1[c]++;
            }
        }
        for(char c : t){
            if(um2.find(c) == um2.end()){
                um2[c] == 1;
            }
            else{
                um2[c]++;
            }
        }

        if(um1==um2){
            return true;
        }
        return false;
    }
};
