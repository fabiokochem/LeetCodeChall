#include <string>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while(l < r){
            if(s[l] != s[r]){
                return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
            } 
            l++, r--;
        }

        return true;
    }

private:
    bool isPalindrome(string& s, int l, int r){
        while(l < r){
            if(s[l] != s[r]) return false;
            l++, r--;
        }

        return true;
    }
};
