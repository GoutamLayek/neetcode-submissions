class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int>mpp;
        priority_queue<pair<int, int>>maxheap;

        vector<int>ans;
        

        for(auto key : nums){
            mpp[key]++;
        }

        for(auto itr: mpp){
            maxheap.push({itr.second, itr.first});
        }

        while(k--){

            int val = maxheap.top().second;
            ans.push_back(val);
            maxheap.pop();

        }

        return ans;
        
    }
};
