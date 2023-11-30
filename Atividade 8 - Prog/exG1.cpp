#include <iostream>
#include <climits>
using namespace std;

void encontrarMinEMax(int vetor[], int tamanho, int &minimo, int &maximo) {
    if (tamanho <= 0) {
        cout << "Vetor vazio." << endl;
        return;
    }

    minimo = INT_MAX;
    maximo = INT_MIN;

    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
    }
}

int main() {
    int vetor[] = {4, 2, 7, 1, 9, 5, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int minimo, maximo;

    encontrarMinEMax(vetor, tamanho, minimo, maximo);

    cout << "Mínimo: " << minimo << endl;
    cout << "Máximo: " << maximo << endl;

    return 0;
}