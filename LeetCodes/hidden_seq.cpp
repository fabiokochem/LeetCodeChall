class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long sum = 0, maximum = 0, minimum = 0;
        
        for (int i : differences) {
            sum += i;
            maximum = max(maximum, sum);
            minimum = min(minimum, sum);
        }
      
        return max(0L, upper - lower - maximum + minimum + 1);
    }
};
