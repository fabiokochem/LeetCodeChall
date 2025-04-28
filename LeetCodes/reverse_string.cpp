/*
The problem asks to reverse a string s and must be done in-place.

To solve this, we can use the two-pointer technique, with pointer i at the beginning of the string and j at the end of the string. As i < j, we swap between each char in s[i] and s[j], reversing the string.

Complexity: O(n)
*/
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = size(s) - 1;

        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
};
