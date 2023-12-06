/*Comparando Endereços com Ponteiros Crie um programa que declare duas
variáveis inteiras e dois ponteiros para inteiros. Atribua a cada ponteiro o
endereço de uma das variáveis. Compare os endereços armazenados nos
ponteiros e imprima qual variável está em um endereço de memória mais
alto. A resposta deve ser qual variável está em um endereço de memória
mais alto.*/

#include <iostream>
using namespace std;

int main() {
    int var1 = 42; 
    int var2 = 73;  

    int* ptr1 = &var1;  
    int* ptr2 = &var2;  

    if (ptr1 > ptr2) {
        cout << "A variavel var1 esta em um endereco de memoria mais alto." << endl;
    } else if (ptr2 > ptr1) {
        cout << "A variavel var2 esta em um endereco de memoria mais alto." << endl;
    } else {
        cout << "Os enderecos sao iguais." << endl;
    }

    return 0;
}