#include <iostream>
using namespace std;

int teste(int x[], int n){
    if (n == 0)
        return 0;
    if (x[n-1] > 10)
        return x[n-1] + teste(x, n-1);
    else
        return teste(x, n-1);
}

// A função fornecida é uma função recursiva linear que percorre um array x de inteiros de tamanho n e realiza algumas operações com os elementos do array. É um exemplo de recursão linear, pois cada chamada recursiva é feita uma única vez em uma cadeia linear. Não há chamadas recursivas adicionais dentro de cada chamada recursiva. Portanto, não é uma recursão em árvore.