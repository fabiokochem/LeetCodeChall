#include <vector>
#include <unordered_map>
#include <priority_queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int n : nums) map[n]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for(const auto& ele : map){
            minHeap.push({ele.second, ele.first});

            if(minHeap.size() > k) minHeap.pop();
        }

        vector<int> res(k);

        for(int i = 0; i < k; ++i){
            res[i] = minHeap.top().second;
            minHeap.pop();
        }

        return res;
    }
};
