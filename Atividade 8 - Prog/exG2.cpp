#include <iostream>
using namespace std;

void juntarVetores(const int vetor1[], int tamanho1, const int vetor2[], int tamanho2, int vetorResultado[], int& tamanhoResultado) {
    tamanhoResultado = tamanho1 + tamanho2;

    for (int i = 0; i < tamanho1; ++i) {
        vetorResultado[i] = vetor1[i];
    }

    for (int i = 0; i < tamanho2; ++i) {
        vetorResultado[tamanho1 + i] = vetor2[i];
    }
}

int main() {
    int vetor1[] = {1, 2, 3};
    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);

    int vetor2[] = {4, 5, 6, 7};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);

    int tamanhoResultado = tamanho1 + tamanho2;
    int vetorResultado[tamanhoResultado];

    juntarVetores(vetor1, tamanho1, vetor2, tamanho2, vetorResultado, tamanhoResultado);

    cout << "Vetor Resultante: ";
    for (int i = 0; i < tamanhoResultado; ++i) {
        cout << vetorResultado[i] << " ";
    }
    cout << endl;

    return 0;
}