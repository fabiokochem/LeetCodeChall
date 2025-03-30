/*
Nesse problema, é necessário uma verificação de se uma frase ou palavra é um palíndromo. De acordo com as variações do problema, preciso garantir que a comparação é feita em lowercase (podem ter uppercase).

Para resolver esse problema, utilizei a técnica de two pointers (front and back) para conseguir comparar a string na sua posição original e inversa simultaneamente, visto que para
satisfazer a condição de um palíndromo, ela precisaria necessariamente ser espelhada.

A complexidade será O(n).
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i <= j){
            if(!isalnum(s[i])){
                i++;
            } else if(!isalnum(s[j])){
                j--;
            } else {
                if (tolower(s[i]) != tolower(s[j])){
                    return false;
                }
                i++;
                j--;
            }
        }

        return true;
    }
};
