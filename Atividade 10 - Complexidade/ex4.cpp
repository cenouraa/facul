/*Dado um conjunto de valores previamente armazenados em um vetor A, nas posições A[l],A[l + 1], . . . ,A[n], verificar se um número v está entre este conjunto de valores. Se o elemento procurado v não for encontrado a função deve retornar −1. Caso contrário deve retornar o índice do vetor A que contém o elemento v. Desenvolver o algoritmo, calcular a complexidade para o melhor caso e pior caso para o algoritmo proposto.
*/

#include <iostream>
using namespace std;

int buscaLinear(int* A, int tamanho, int valorProcurado) {
    for (int i = 0; i < tamanho; ++i) {
        if (A[i] == valorProcurado) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = 10;
    int valorProcurado = 7;

    int resultado = buscaLinear(vetor, tamanho, valorProcurado);

    if (resultado != -1) {
        cout << "elemento encontrado no indice: " << resultado << endl;
    } else {
        cout << "elemento nao encontrado" << endl;
    }

    return 0;
}

/*O pior caso ocorre quando o elemento procurado não está presente no vetor ou está na última posição. Neste caso, a busca linear percorre todo o vetor até o final. A complexidade de tempo no pior caso é, portanto, O(n), onde n é o número de elementos no vetor.*/

/*O melhor caso ocorre quando o elemento procurado está na primeira posição do vetor. Neste caso, a busca linear encontra o elemento imediatamente na primeira iteração. A complexidade de tempo no melhor caso é O(1).*/