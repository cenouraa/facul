#include <iostream>
using namespace std;

void separarParesEImpares(const int vetor[], int tamanho, int pares[], int& tamanhoPares, int impares[], int& tamanhoImpares) {
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] % 2 == 0) {
            pares[tamanhoPares++] = vetor[i];
        } else {
            impares[tamanhoImpares++] = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int pares[tamanho], impares[tamanho];
    int tamanhoPares = 0, tamanhoImpares = 0;

    separarParesEImpares(vetor, tamanho, pares, tamanhoPares, impares, tamanhoImpares);

    cout << "Elementos Pares: ";
    for (int i = 0; i < tamanhoPares; ++i) {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Elementos Ímpares: ";
    for (int i = 0; i < tamanhoImpares; ++i) {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}