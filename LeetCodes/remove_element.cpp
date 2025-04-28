/*
Basicamente o problema pede para que sejam retiradas todas as ocorrências de um valor inteiro val em um array
(que nesse caso é representado como um vetor). Além disso, eu preciso garantir que todos os elementos restantes estejam nas primeiras k posições do array e é necessário também retornar a quantidade de elementos restantes após a retirada de n ocorrências de val.

Primeira Tentativa:
Para resolver isso, eu proponho um algoritmo utilizando somente um for, em que eu passo ao longo do array verificando se 
aquela posição possui um valor igual a val, ou seja, nums[i] == val?, e caso seja eu removo o elemento. Utilizando um vector eu nao preciso necessariamente me preocupar com a ordem dos elementos porque uma vez que eu removo o elemento do vector utilizando a função erase(), a posição "deixa de existir", porque o que acontecesse de fato é que o array é remanejado com o elemento sucessor para preencher a remoção. Com o array tendo todas as ocorrências de val removidas, eu atribuo a variável val a quantidade de elementos do novo array.

A estrutura de dados que eu vou utilizar vai ser um array e a complexidade será em O(n).

Segunda Tentativa (Solução):
Errei querendo usar um for, porque cada vez que utilizo nums.erase(), o tamanho de nums decrementa, então elementos eram pulados com o incremento de i e o decremento de nums. PRESTAR ATENÇÃO NO PONTEIRO SEMPRE!!! 

A complexidade continuou em O(n).
*/
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while(i != size(nums)){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
            } else {
                i++;
            }
        }

        val = size(nums);

        return val;
    }
};
