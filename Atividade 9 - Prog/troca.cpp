/*Variáveis Externas Crie dois arquivos de código-fonte. No primeiro arquivo,
declare uma variável global. No segundo arquivo, use a palavra-chave extern
para declarar a mesma variável e atribua um novo valor a ela. Imprima o
valor da variável no segundo arquivo. A resposta deve ser o novo valor da
variável, demonstrando que a variável externa no segundo arquivo se refere
à variável global no primeiro arquivo.*/

#include <iostream>
using namespace std;

extern int n;

int troca(){
    n = 86754;
    cout << n;
}