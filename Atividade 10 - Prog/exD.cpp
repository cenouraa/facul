/*Escreva uma segunda versão do programa anterior usando aritmética de ponteiros
para varrer os vetores nas funções.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double* alocarVetor(int n) {
    return new double[n];
}

void preencherVetor(double* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cin >> *(vetor + i);
    }
}

double mediaNotas (double* vetor, int n){
    double media;
    for(int i=0; i < n; i++){
        media += *(vetor + i);
    }
    return media/n;
}

void liberarMemoria(double* vetor) {
    delete[] vetor;
}

int main(){
    int n;
    cin >> n;

    double* vetor = alocarVetor(n);
    preencherVetor(vetor, n);
    cout << fixed << setprecision(2) << "Media Aritmetica: " << mediaNotas(vetor, n);
    liberarMemoria(vetor);
    return 0;
}