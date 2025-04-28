/*
Para esse problema, sabendo a fórmula do Triângulo de Pascal se tornava muito fácil de fazer.

Complexidade: O(rowIndex);
*/

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row = {1};

        long long prev = 1;
        for(int i = 1; i <= rowIndex; i++){
            long long next_ele = prev * (rowIndex - i + 1) / i;
            row.push_back(next_ele);

            prev = next_ele;
        }

        return row;
    }
};
