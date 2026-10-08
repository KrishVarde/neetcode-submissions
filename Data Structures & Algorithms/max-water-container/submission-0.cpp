class Solution {
public:

    int area(int left,int right, int dist){
        int min = left < right ? left : right;
        return (min*dist);
    }

    int maxArea(vector<int>& heights) {
        int maxarea = 0;
        int i = 0;
        int j = heights.size() - 1;
        while(i < j){
            maxarea = max(maxarea,area(heights[i],heights[j],j-i));
            if(heights[i] > heights[j])
                j--;
            else if (heights[i] < heights[j])
                i++;
            else{
                i++;j--;
            }
        }
        return maxarea;
    }
};
