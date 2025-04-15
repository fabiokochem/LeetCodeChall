class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int res = 0, major = 0;
        int n = nums.size();

        for(int n : nums){
            hash[n] = hash[n] + 1;
            if(hash[n] > major){
                major = hash[n];
                res = n;
            }
        }

        return res;
    }
};
