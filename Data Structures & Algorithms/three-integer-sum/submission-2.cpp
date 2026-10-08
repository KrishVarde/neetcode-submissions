class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> res;

        int k = 0;
        while(k < nums.size()){
            int i = k+1;
            int j = nums.size() - 1;
            int comp = nums[k] * (-1);
            if(k==0 || nums[k] != nums[k-1]){
                while(i < j){
                    if(comp < nums[i] + nums[j])
                        j--;
                    else if(comp > nums[i] + nums[j])
                        i++;
                    else{
                        res.push_back({nums[i],nums[j],nums[k]});
                        i++;j--;

                        while(i < j && nums[i] == nums[i-1]) i++;
                        while(i < j && nums[j] == nums[j+1]) j--;
                    }
                }
            }    
            k++;
        }
        return res;
    }
};
