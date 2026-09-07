class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>mpp;

        for(int val : nums){

            if(mpp.find(val) != mpp.end())
             return true;
            
            mpp[val]++;
        }

        return false;
    }
};