class Solution {
public:
    int characterReplacement(string s, int k) {
        // variable window size
        /*The window grows with right
        The window shrinks by moving left only when a constraint is violated*/ 

        //Number of replacements needed = window length − highest frequency

        unordered_map<char, int>count;
        int maxlength = 0;

        int left = 0, maxfreq = 0;

        for(int right = 0; right < s.size(); right++){

            count[s[right]]++;

            maxfreq = max(maxfreq, count[s[right]]);
            
            while((right - left + 1) - maxfreq > k){  //while (maxlength - maxfreq > k)--> wrong maxlength is changing
                count[s[left]]--;
                maxfreq = max(maxfreq, count[s[left]]);
                left++;
            }

            maxlength = max(maxlength, right - left + 1);

        }

        return maxlength;


        

    }
};
