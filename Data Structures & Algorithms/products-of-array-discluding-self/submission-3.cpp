class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int noZero = 1;
        int flag = 0;
        for(int i = 0; i<nums.size() ; i++){
            if(nums[i] != 0)
                noZero *= nums[i];
            if(nums[i] == 0)
                flag++;
            product *= nums[i];
        }
        vector<int> out;
        for(int num : nums){
            if(flag > 1){
                out.push_back(0);
            }
            else if(num == 0){
                out.push_back(noZero);
            }
            else{
                out.push_back(product / num);
            }   
        }
        return out;
    }
};
