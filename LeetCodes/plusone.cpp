/*
For this problem, we need to take a large integer that will be received as an array and increment the resulting number by one. After that, we need to put it in the array again, in order.

To solve this, I think we need to check from the last digit, if it is necessarily < 9, we just need to increment that position and return the array. If that position is greater than 9,
we go to the previous position of the array, check the other digit and do the same process.

There is a specific case in which all positions are equal to 9. In this situation, we create an array with one more position and the first position = 1 and the rest = 0.

Complexity: O(n)
*/
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = size(digits) - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                return digits;
            }

            digits[i] = 0;
        }
    
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
