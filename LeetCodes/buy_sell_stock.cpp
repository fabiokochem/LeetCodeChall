#include <iostream>
#include <vector>

using namespace std;

/*
This code was my only attempt to the problem. Basically here i used a greedy approach to solve the problem.

The steps that i built to reach this solution:
    - I will need two variables to store the buy price and the profit, so i will create them.
    - From this, i will iterate over the array and for each element, i will calculate the maximum value between the current profit and the difference between the current price and the buy price.
    - If the current price is less than the buy price, i will update the buy price.
    - At the end, i will return the profit.

Good solution, O(n).
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit;        
    }
};