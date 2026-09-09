class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char, int>count;
        string ans = "";

        for(char ch : s){
            count[ch]++;
        }

        for(char ch: order){
            if(count.contains(ch)){
                while(count[ch] != 0){
                    ans += ch;
                    count[ch]--;
                }

                if(count[ch] == 0)
                 count.erase(ch);
            }
        }

        if(!count.empty()){
            for(auto val : count){
                while(val.second != 0){
                    ans += val.first;
                    val.second--;
                }
            }
        }

        return ans;
        
    }
};