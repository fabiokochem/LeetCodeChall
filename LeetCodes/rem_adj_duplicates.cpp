class Solution {
public:
    string removeDuplicates2(string s) {
        stack<char> st;

        for(char c : s){
            if(st.empty() || st.top() != c){
                st.push(c);
            } else {
                st.pop();
            }
        }

        string str;
        while(!st.empty()){
            str = st.top() + str;
            st.pop();
        }

        return str;
    }

    string removeDuplicates(string s) {
        string str;

        for(char c : s){
            if(str.empty() || str.back() != c){
                str.push_back(c);
            } else {
                str.pop_back();
            }
        }

        return str;
    }
};
