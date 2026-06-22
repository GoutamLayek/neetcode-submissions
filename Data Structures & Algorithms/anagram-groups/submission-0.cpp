class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>result;
        string s;
        unordered_map<string, vector<string>>mpp;

        for(auto str : strs){
            s = str;
            sort(s.begin(), s.end());
            mpp[s].push_back(str);
        }

        for(auto itr : mpp){
            result.push_back(itr.second);
        }

        return result;
    }
};
