class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // identify which number can be the start of the sequence

        unordered_set<int>keys(nums.begin(), nums.end());
        int longest = 0;

        for(auto key : keys){
            if(keys.find(key-1) == keys.end()){  // can be the start of the seq
                int length = 1;

                while(keys.find(key + length) != keys.end())
                 length++;
                
                longest = max(longest, length);
            }
        }
        return longest;

    }
};
