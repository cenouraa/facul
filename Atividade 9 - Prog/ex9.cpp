/*Acessando Elementos de um Array com Ponteiros Crie um programa que
declare um array de inteiros e um ponteiro para um inteiro. Atribua ao
ponteiro o endereço do primeiro elemento do array. Use aritmética de
ponteiros para acessar e imprimir cada elemento do array. A resposta deve
ser os valores de cada elemento do array.*/

#include <iostream>
using namespace std;

int main() {
    const int tamanhoArray = 5;  
    int array[tamanhoArray] = {10, 20, 30, 40, 50};  

    int* ponteiro = &array[0]; 

    for (int i = 0; i < tamanhoArray; ++i) {
        cout << *(ponteiro + i) << endl;
    }

    return 0;
}