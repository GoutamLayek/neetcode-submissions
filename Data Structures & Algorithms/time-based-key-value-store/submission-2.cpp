class TimeMap {

    unordered_map<string, vector<pair<int, string>>>mpp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        
        if(mpp.find(key) == mpp.end())
         return "";
        
        vector<pair<int, string>>nums;
        nums = mpp[key];
        
        if(nums[0].first > timestamp)
         return "";
        
        //Binary search
        int mid = 0, low = 0, high = nums.size()-1;

        while(low <= high){
            mid = low + (high - low)/2;

            if(nums[mid].first == timestamp)
             return nums[mid].second;
            
            if(nums[mid].first > timestamp)
             high = mid - 1;
            
            else
             low = mid + 1;
        }

        return nums[high].second;

    }
};
