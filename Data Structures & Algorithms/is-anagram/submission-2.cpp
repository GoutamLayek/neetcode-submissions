class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
         return false;

        vector<int>countS(26, 0);  // constants -- size 26
        vector<int>countT(26,0);

        for(int i = 0; i < s.length(); i++){
            countS[s[i] - 'a']++;
            countT[t[i] - 'a']++;
        }

        if(countS != countT)
         return false;

        return true;

        
    }
};
