#include <iostream>
using namespace std;

void bubbleSort(int *v, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v1[] = {7, 2, 5, 4, 9};
    int n = sizeof(v1) / sizeof(v1[0]);

    bubbleSort(v1, n);

    for (int i = 0; i < n; ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    int v2[] = {7, 5, 5, 3, 9};
    n = sizeof(v2) / sizeof(v2[0]);

    bubbleSort(v2, n);

    for (int i = 0; i < n; ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;

    int v3[] = {1, 2, 3, 4};
    n = sizeof(v3) / sizeof(v3[0]);

    bubbleSort(v3, n);

    for (int i = 0; i < n; ++i) {
        cout << v3[i] << " ";
    }
    cout << endl;

    int v4[] = {4, 3, 2, 1};
    n = sizeof(v4) / sizeof(v4[0]);

    bubbleSort(v4, n);

    for (int i = 0; i < n; ++i) {
        cout << v4[i] << " ";
    }
    cout << endl;

    return 0;
}