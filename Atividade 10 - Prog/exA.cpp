/*Escreva um programa que possua uma função que insira n números inteiros em um
vetor (alocado dinamicamente). Os números serão inseridos automaticamente,
conforme o índice da posição (ou seja, para n=6, os elementos do vetor serão v = {0, 1,
2, 3, 4, 5}. Desenvolva outra função que apresente o conteúdo do vetor. Além disso,
antes de finalizar o programa, deve-se liberar a área de memória alocada.*/

#include <iostream>
using namespace std;

int* alocarVetor(int n) {
    return new int[n];
}

void preencherVetor(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        vetor[i] = i;
    }
}

void exibirVetor(const int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cout << vetor[i];
        cout << " ";
    }
}

void liberarMemoria(int* vetor) {
    delete[] vetor;
}

int main() {
    int n;
    cin >> n;

    int* vetor = alocarVetor(n);
    preencherVetor(vetor, n);
    exibirVetor(vetor, n);
    liberarMemoria(vetor);

    return 0;
}