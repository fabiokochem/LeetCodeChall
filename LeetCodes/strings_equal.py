"""
This code was my second attempt to the problem. Basically here i firstly analyzed the base cases and since we have only swap, the limit of counter should be 2 to a TRUE answer.

The steps that i built to reach this solution:
    - I will need two variables to be pointers, storing where the strings are different. I will need also a counter variable to increment when we find a mismatch.
    - From this, i will iterate over the size of s1 (considering both strings has the same size) and i will compare if each letter at position i are the same in both strings.
    - When we find a mismatch, we need to increment the counter variable and save the position of the mismatch but ONLY ONCE per variable p1 and p2.
    
Good solution, O(n).
"""

class Solution(object):
    def areAlmostEqual(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        counter = 0
        p1 =- 1
        p2 =- 1
        
        for i in range(0, len(s1)):
            if s1[i] != s2[i]:
                if p1 == -1 : p1 = i
                elif p2 == -1 : p2 = i
                counter += 1
        
        if counter == 2 and s1[p1] == s2[p2] and s1[p2] == s2[p1]: return True
        elif counter == 0: return True
          
        return False
