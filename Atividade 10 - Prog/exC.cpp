/*Implemente um programa que solicita ao usuário a quantidade de alunos de uma
turma e aloca um vetor de notas (números reais). O programa deve ter duas funções:
uma para leitura de notas no vetor e outra para imprimir a média aritmética das notas.
Deve-se liberar a área de memória alocada antes de finalizar o programa.*/

#include <iostream>
#include <iomanip>
using namespace std;

double* alocarVetor(int n) {
    return new double[n];
}

void preencherVetor(double* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
}

double mediaNotas (double* vetor, int n){
    double media;
    for(int i=0; i < n; i++){
        media += vetor[i];
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