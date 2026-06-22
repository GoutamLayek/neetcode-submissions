class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0, right = heights.size()-1;

        int length, currval, ans = 0;

        while(left < right){

            length = right - left;
            currval = min(heights[left], heights[right]) * length;

            ans = max(ans, currval);

            // which side to go 

            //If you keep the shorter line and move the taller one,
            //the height won’t increase, and width decreases → area cannot improve.

            if(heights[left] < heights[right])
                left++;
            
            else
             right--;
        }

        return ans;
        
    }
};
