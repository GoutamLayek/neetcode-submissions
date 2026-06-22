class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left = 0, right = numbers.size()-1;
        int val;

        while(left < right){
            val = numbers[left] + numbers[right];

            if(val == target)
             return {left+1, right+1};
            
            if(val < target)  // we need greater element
             left++;
            
            else
             right--;
        }

        return {-1,-1};

    }
};
