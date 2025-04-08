class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr_val = 0, max_val = 0;

        for(int i = 0; i < k; i++){
            curr_val += nums[i];
        }

        max_val = curr_val;
        int i = 1, j = k;
        while(j < size(nums)){
            curr_val -= nums[i-1];
            curr_val += nums[j];

            max_val = max(curr_val, max_val);
            i++, j++;
        }

        return max_val / k;
    }
};
