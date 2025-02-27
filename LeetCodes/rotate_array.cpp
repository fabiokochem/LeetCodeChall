#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
I had two solutions for this problem. The first one i did iteratively k times and rotated the array by one element each time, But obviously this is not the best solution. The second solution is the best solution. I used the reverse function to reverse the whole array and then reversed the first k elements and then the last n-k elements.

Steps to the first algorithm:
    - Iterate k times
    - Rotate the array by one element each time
    - Time complexity: O(n*k)

Steps to the second algorithm:
    - Reverse the whole array
    - Reverse the first k elements
    - Reverse
    - Time complexity: O(n)
*/

class Solution1 {
    public:
        void rotate(vector<int>& nums, int k) {
            int temp = 0;
    
            for(int i = 0; i < k; i++){
                temp = nums[nums.size() - 1];
                for(int j = nums.size() - 1; j > 0; j--){
                    nums[j] = nums[j - 1];
                }
                nums[0] = temp;
            }
        }
    };

class Solution2 {
    public:
        void rotate(vector<int>& nums, int k) {
            k = k % nums.size();
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
        }
    };