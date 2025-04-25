class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n = size(temp);
        vector<int> arr(n, 0);

        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first < temp[i]) {
                int idx = st.top().second;
                arr[idx] = i - idx;
                st.pop();
            }
            st.push({temp[i], i});
        }

        return arr;
    }
};
