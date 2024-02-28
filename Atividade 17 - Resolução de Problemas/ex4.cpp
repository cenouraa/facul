#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanho;
    cin >> tamanho;

    int numeros[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        cin >> numeros[i];
    }

    bubbleSort(numeros, tamanho);

    for (int i = 0; i < tamanho; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}