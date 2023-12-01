#include <iostream>
using namespace std;

int main() {
    int linhaA = 0, colunaA = 0, linhaB = 0, colunaB = 0;

    cout << "Dimensão da matriz A: " << endl;
    cin >> linhaA >> colunaA;
    cout << "Dimensão da matriz B: " << endl;
    cin >> linhaB >> colunaB;

    if (colunaA != linhaB) {
        cout << "Não é possível fazer a multiplicação!!!" << endl;
        return 0;
    }

    int mA[linhaA][colunaA] = {0};
    int mB[colunaA][colunaB] = {0};
    int mC[linhaA][colunaB] = {0}; 

    cout << "Escreva a matriz A: " << endl;
    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaA; j++) {
            cin >> mA[i][j];
        }
    }

    cout << "Escreva a matriz B: " << endl;
    for (int i = 0; i < colunaA; i++) {
        for (int j = 0; j < colunaB; j++) {
            cin >> mB[i][j];
        }
    }

    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaB; j++) {
            for (int k = 0; k < colunaA; k++) {
                mC[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }

    cout << "Matriz resultante: " << endl;

    for (int i = 0; i < linhaA; i++) {
        for (int j = 0; j < colunaB; j++) {
            cout << mC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}