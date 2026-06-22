class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>ans(nums.size());
        int val = 1;
        int zerocount = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                val = val * nums[i];
            else
             zerocount++;
        }

        if(zerocount > 1){  
            return ans;
        }

        for(int i = 0; i < nums.size(); i++){
            if(zerocount == 1)
             ans[i] = (nums[i] == 0) ? val : 0;
            
            else
             ans[i] = val/nums[i];
        }

        return ans;
    }
};
