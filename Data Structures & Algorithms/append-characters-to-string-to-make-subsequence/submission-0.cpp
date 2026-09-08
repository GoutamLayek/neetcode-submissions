class Solution {
public:
    int appendCharacters(string s, string t) {

        int left = 0, right = 0;

        while(left < s.length() && right < t.length()){
            if(s[left] == t[right])
                right++;
            
            left++;
        }

        if(right > t.length())
         return 0;
        
        return t.length() - right;
        
    }
};