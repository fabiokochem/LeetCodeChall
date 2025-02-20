"""
    This was my only solution to the problem. The main approach of it is to transpose the matrix and then reverse each row.
    This way we can rotate the matrix 90 degrees to the right.
    
    Time complexity: O(n^2), not the best code i did in my life, but it works.
    Space complexity: O(1), no extra space is used.
"""
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        for i in range(n):
            for j in range(i, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        for i in range(n):
            matrix[i].reverse()