class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
         return false;

        unordered_map<int, int>mpp;
        int val;

        for(auto str : s){
            val = str - 'a';
            mpp[val]++;
        }

        for(auto str : t){
            val = str - 'a';
            if(mpp.find(val) != mpp.end()){
             mpp[val]--;
             if(mpp[val] == 0)
              mpp.erase(val);
            }
            else
             return false;
        }

        return true;
        
    }
};
