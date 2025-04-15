/*
This problem asks for two numbers which adds up to a target number, but the array is already sorted.

To solve it, we can use the two pointers (front and back) technique in order to improve the complexity.

We set a pointer l and a pointer r (first and last positions) and from this we analyze if the sum of them == target.
If not -> analyze if the sum is bigger than target, which means we need to decrement r, otherwise, increment l.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = size(numbers) - 1;
        int sum = 0;
        
        while(l < r){
            sum = numbers[l] + numbers[r];
            if(sum == target){
                return {l+1, r+1};
            } else if(sum < target){
                l++;
            } else {
                r--;
            }
        }

        return {l,r};
    }
};
