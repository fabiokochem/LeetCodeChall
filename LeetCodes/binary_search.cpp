class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, size(nums) - 1);
    }

    int binary_search(vector<int>& nums, int target, int start, int end){
        if (start > end) return -1 ;

        int middle = start + floor((end - start) / 2);

        if(nums[middle] == target) return middle;
        else if(nums[middle] > target) return binary_search(nums, target, start, middle - 1);
        else return binary_search(nums, target, middle + 1, end);
    }
};
