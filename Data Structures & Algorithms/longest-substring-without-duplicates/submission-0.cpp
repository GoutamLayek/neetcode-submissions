class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window --> variable size window
        // substring --> we cannot jump

        unordered_set<char>keys;

        int left = 0,  maxlength = 0;

        for(int right = 0; right < s.size(); right++){

            if(keys.count(s[right]) != 0){
                
                while(s[left] != s[right]){
                  keys.erase(s[left]);
                  left++;
                }
                
                keys.erase(s[left]);
                left ++;
            }
                

            keys.insert(s[right]);

            maxlength = max(maxlength, right - left + 1);

        }

        return maxlength;
    }
};
