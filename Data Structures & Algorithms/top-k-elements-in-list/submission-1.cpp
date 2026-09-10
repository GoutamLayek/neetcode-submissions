class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //heap takes O(nlogk) time and O(n+k) space -- map and heap
        // bucket sort takes O(n) time and space

        unordered_map<int, int>count;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int>res;

        for(int n : nums)
         count[n]++;
        
        for(auto val : count){
            freq[val.second].push_back(val.first);
        }

        for(int i = freq.size()-1; i > 0; i--){
            for(int n : freq[i]){
                res.push_back(n);
                if(res.size() == k)
                    return res;
            }
        }

        return res;
        
    }
};
