"""
This code was my only attempt to the problem. Basically, I used a variable to store the answer and a heap to process the numbers efficiently.

The steps that i built to reach this solution:
    - I started by initializing a variable ans to store the count of operations and a heap to manage the numbers.
    - I pushed all the elements from the nums list into the heap, so they are sorted and easily accessible.
    - I repeatedly performed the following steps until a condition was met:
      - I extracted the smallest element from the heap.
      - I checked if this element was greater than or equal to k. If true, I returned the current ans as the answer.
      - Otherwise, I incremented ans to count the operation, combined the smallest element with the next smallest (multiplied the first by 2 and added the second), and pushed the result back into the heap.
    - The process continued until an element greater than or equal to k was reached, ensuring the minimum number of operations.
    
Good Solution, O(n log n).
"""
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        ans = 0
        heap = []

        for item in nums:
            heapq.heappush(heap,item)
        
        while True:
            curr = heapq.heappop(heap)
            if curr >= k:
                return ans
            else:
                ans += 1
                nxt = heapq.heappop(heap)
                heapq.heappush(heap,curr * 2 + nxt)
        return ans
