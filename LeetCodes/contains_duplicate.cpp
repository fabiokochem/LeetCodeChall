#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
This code was my only attempt to the problem. Basically here i used a sorting approach to solve the problem.

The steps that i built to reach this solution:
    - I will sort the array.
    - I will iterate over the array and for each element, i will check if the current element is equal to the next element.
    - If it is, i will return true.
    - If the loop ends, i will return false.

Good solution, O(n log n).
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }

        return false;
    }
};