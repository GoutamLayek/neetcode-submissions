class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0 = 0, count1 = 0, count2 = 0;
        int index = 0;

        for(int val: nums){
            if(val == 0)
             count0++;
            
            else if(val == 1)
             count1++;
            
            else
             count2++;
        }

        while(count0 != 0){
            nums[index++] = 0;
            count0--;
        }

        while(count1 != 0){
            nums[index++] = 1;
            count1--;
        }

        while(count2 != 0){
            nums[index++] = 2;
            count2--;
        }
    }
};