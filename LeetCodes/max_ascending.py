from typing import List

"""
This code was my only attempt to the problem. Basically I'm using a variable to store the answer and another to store the sum of the numbers.

The steps that i built to reach this solution:
    - I started by creating a variable to store the answer and another to store the sum of the numbers.
    - I iterated over the list of numbers starting from the second element.
    - I checked if the current number is greater than the previous one.
    - If it is, I add it to the sum.
    - If it's not, I check if the current sum is greater than the previous one and update the answer.
    - In the end, I return the maximum value between the answer and the sum.
    
Good Solution, O(n).
"""
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        ans = 0
        sum = nums[0]
        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:
                sum += nums[i]
            else:
                ans = max(ans, sum)
                sum = nums[i]
        return max(ans, sum)