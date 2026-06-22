class Solution {
public:

    string encode(vector<string>& strs) {

        string s;
        int len;

        for(string str : strs){
            len = str.length();
            s += to_string(len) + "#" + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;

        int len = 0, index = 0;
        string str;

        while(index < s.size()){
            int j = index;

            while(s[j] != '#')
             j++;

            len = stoi(s.substr(index, j-index));
            ans.push_back(s.substr(j+1,len));

            j = j + len + 1;
            index = j;
        }

        return ans;
    }
};
