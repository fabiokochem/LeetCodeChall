#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int res = 0;
        int i = 0;

        for(int j = 0; j < nums.size(); j++){
            map[nums[j]]++;

            while(i <= j && map[nums[j]] > k){
                map[nums[i]]--;
                i++;
            }

            res = max(res, j-i+1);
        }

        return res;
    }
};
