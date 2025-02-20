"""
    This was my only attempt at this problem. To solve it, i thought of the following:
        - I would iterate through the list of binary numbers
        - For each number, I would check the ith element of the number
        - If the ith element is 0, I would append 1 to the result
        - If the ith element is 1, I would append 0 to the result

    Easy peasy, lemon squeeze. Time complexity is O(n) where n is the length of the list of binary numbers.
"""
def findDifferentBinaryString(nums):
    n = len(nums)
    result = []

    for i in range(n):
        result.append('1' if nums[i][i] == '0' else '0')

    return ''.join(result)
