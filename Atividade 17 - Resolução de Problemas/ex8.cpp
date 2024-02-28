#include <iostream>
using namespace std;

int binarySearch(int lista[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (lista[meio] == alvo)
            return meio;

        if (lista[meio] > alvo)
            direita = meio - 1;
        else
            esquerda = meio + 1;
    }

    return -1;
}

int main() {
    int lista[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int alvo = 12;

    int posicao = binarySearch(lista, tamanho, alvo);

    if (posicao != -1)
        cout << posicao << "." << endl;
    else
        cout << "nao esta na lista" << endl;

    return 0;
}