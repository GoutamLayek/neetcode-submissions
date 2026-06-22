class Solution {

    bool check(int key, vector<int>&piles, int target){

        double total_time = 0;

        for(auto val : piles){
            total_time += ceil((double)val/key);
        }
        
        if(total_time <= target)
         return true;
        
        return false;

    }



public:
    int minEatingSpeed(vector<int>& piles, int h) {

        //Binary search on Answers
        // range = 1 - max element
        int low = 1, high = 0;

        for(auto val : piles)
         high = max(val, high);

        int result = high, mid;

        while(low <= high){

            mid = low + (high - low)/2;

            if(check(mid, piles, h)){
                result = min(result, mid);
                high = mid - 1;
            }

            else
             low = mid + 1;

        }

        return result;
        
    }
};
