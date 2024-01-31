#include <iostream>
using namespace std;

int soma(int *arr, int inicio, int fim) {
    if (inicio > fim) {
        return 0;
    }

    return arr[inicio] + soma(arr, inicio + 1, fim);
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int tamanhoArray = sizeof(v) / sizeof(v[0]);

    int rstd = soma(v, 0, tamanhoArray - 1);

    cout << rstd;

    return 0;
}