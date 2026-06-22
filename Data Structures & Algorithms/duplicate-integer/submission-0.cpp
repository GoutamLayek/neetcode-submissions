class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>keys;

        for(auto value : nums){
            if(keys.count(value) != 0)
             return true;
            
            keys.insert(value);
        }

        return false;
    }
};