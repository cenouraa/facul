/*Altere o programa anterior e use aritmética de ponteiros para percorrer o vetor nas
funções de inserção e impressão dos elementos.*/

#include <iostream>
using namespace std;

int* alocarVetor(int n) {
    return new int[n];
}

void preencherVetor(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        *(vetor + i) = i;
    }
}

void exibirVetor(const int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(vetor + i);
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