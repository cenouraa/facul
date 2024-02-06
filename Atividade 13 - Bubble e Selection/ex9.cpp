#include <iostream>
using namespace std;

void bubbleSortR(int v[], int n) {
    if (n == 1)
        return;
    
    for (int i = 0; i < n - 1; ++i) {
        if (v[i] > v[i + 1]) {
            // Troca os elementos
            int temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }

    bubbleSortR(v, n - 1);
}

int main() {
    int v[] = {5, 7, 2, 3, 9, 9, 1, 2, 0, 3, 4};
    int n = sizeof(v) / sizeof(v[0]);

    bubbleSortR(v, n);

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}