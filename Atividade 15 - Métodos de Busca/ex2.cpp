#include <iostream>
using namespace std;

int busca_binaria(int x, int *v, int n) {
    int ini = 0;
    int fim = n - 1;
    while (ini <= fim) {
        int i = (ini + fim) / 2;
        if (v[i] <= x && (i == n - 1 || x < v[i + 1])) {
            return i;
        } else if (v[i] < x) {
            ini = i + 1;
        } else {
            fim = i - 1;
        }
    }
    return -1;
}

int main() {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(v) / sizeof(v[0]);
    int x;

    cin >> x;

    int indice = busca_binaria(x, v, n);

    if (indice != -1) {
        cout << indice << endl;
    } else {
        cout << "Nenhum elemento encontrado que satisfaça" << endl;
    }

    return 0;
}