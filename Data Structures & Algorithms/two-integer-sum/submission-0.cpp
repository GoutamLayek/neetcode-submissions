class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /* a + b = target 
           a = target - b;
           */ 

        unordered_map<int, int>mpp;

        for(int i = 0; i < nums.size(); i++){
            int key = target - nums[i];

            if(mpp.find(key) != mpp.end()) // found
             return {mpp[key], i};
            
            mpp[nums[i]] = i;
            
        }

        return {-1,-1};
        
    }
};
