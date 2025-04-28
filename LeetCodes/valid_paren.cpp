#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for(char c : s){
            if(!stack.empty()){
                char last = stack.top();
                if(isPair(last, c)){
                    stack.pop();
                    continue;
                }
            }

            stack.push(c);
        }

        return stack.empty();
    }

private:
    bool isPair(char last, char curr){
        if(last == '(' && curr == ')'){
            return true;
        } else if (last == '{' && curr == '}'){
            return true;
        } else if (last == '[' && curr == ']'){
            return true;
        }

        return false;
    }
};
