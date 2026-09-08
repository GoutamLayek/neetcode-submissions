class Solution {

private:
    bool check(string str){

        set<char>vowel = {'a', 'e', 'i', 'o', 'u'};

        if(vowel.contains(str[0]) && vowel.contains(str.back()))
         return true;

        return false; 

    }

public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vector<int>count, ans;
        int val = 0;

        for(string str: words){
            if(check(str))// if vowel -- true
                count.push_back(++val);
            else
                count.push_back(val);
        }

        for(auto arr : queries){
            if(arr[0] == 0){
                ans.push_back(count[arr[1]]);
            }

            else
             ans.push_back(count[arr[1]] - count[arr[0] -1] );
        }
        return ans;
        
    }
};