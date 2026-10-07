class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set set = new HashSet();
        int count = 0;
        for(int i:nums){
            set.add(i);
            count++;
        }
        if(set.size() == count){
            return false;
        }
        else return true;
    }
}