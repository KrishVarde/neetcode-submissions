class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> um;
        for(int n : nums){
            if(um.find(n) == um.end()){
                um[n] = 1;
            }
            else{
                um[n]++;
            }
        }

        for(int i = 0; i < k ; i++){
            int max = 0;
            int maxKey = 0;

            for(auto& p : um){
                if(p.second > max){
                    max = p.second;
                    maxKey = p.first;
                }
            }
            ans.push_back(maxKey);
            um[maxKey] = 0;
        }
        return ans;
    }
};
