class Solution {

private:
    int helper(vector<int>& nums){
        
        int prev2 = 0, prev1 = 0, curr = 0;

        for(int num: nums){
            curr = max(num + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }

        return curr;
    }

public:
    int rob(vector<int>& nums) {
        vector<int>nums1(nums.begin() + 1, nums.end());
        vector<int>nums2(nums.begin(), nums.end() -1);
        return max(nums[0], max(helper(nums1), helper(nums2)));
    }
};
