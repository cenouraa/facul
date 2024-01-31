#include <iostream>
using namespace std;

int teste2(int n){
    if (n < 10)
        return n;
    else
        return n%10 + teste2(n/10);
}

//A função é uma função recursiva que soma os dígitos de um número inteiro n. Portanto, teste2(4532) retorna 18.
