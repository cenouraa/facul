#include <iostream>
using namespace std;

int buscaSequencial(int *v, int n, int x) {
    int j = 0;
    while (j < n && v[j] < x) {
        j++;
    }
    return j;
}

int main() {
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; 
    int n = sizeof(v) / sizeof(v[0]);
    int x;

    cin >> x;

    int indice = buscaSequencial(v, n, x);

    if (indice < n) {
        cout << indice << endl;
    } else {
        cout << "Não há elementos correspondentes" << endl;
    }

    return 0;
}