/*Modifique o programa anterior, incluindo o nome, série e nota de cada aluno (defina
uma struct com esses campos). Faça as alterações necessárias, a fim de que as
informações sejam preenchidas e calculada a média aritmética da turma.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int serie;
    double nota;
};

Aluno* alocarVetor(int n) {
    return new Aluno[n];
}

void preencherVetor(Aluno* vetor, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Informe o nome do aluno " << i + 1 << ": ";
        cin >> vetor[i].nome;

        cout << "Informe a serie do aluno " << i + 1 << ": ";
        cin >> vetor[i].serie;

        cout << "Informe a nota do aluno " << i + 1 << ": ";
        cin >> vetor[i].nota;
    }
}

double mediaNotas(Aluno* vetor, int n) {
    double media = 0.0;
    for (int i = 0; i < n; i++) {
        media += vetor[i].nota;
    }
    return media / n;
}

void liberarMemoria(Aluno* vetor) {
    delete[] vetor;
}

int main() {
    int n;
    cin >> n;

    Aluno* vetor = alocarVetor(n);
    preencherVetor(vetor, n);
    cout << fixed << setprecision(2) << "Media Aritmetica: " << mediaNotas(vetor, n);
    liberarMemoria(vetor);

    return 0;
}