#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int idade;
    float nota;
    string nome;
}Aluno;


void preenche(Aluno& aluno, string nome, int idade, float nota) {
    aluno.nome = nome;
    aluno.idade = idade;
    aluno.nota = nota;
}

void imprime(const Aluno& aluno) {
    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;

}

int main() {
    Aluno alunos[3];

    preenche(alunos[0], "Joao", 20, 8.5);
    preenche(alunos[1], "Maria", 22, 9.0);
    preenche(alunos[2], "Pedro", 21, 7.8);

    for (int i = 0; i < 3; ++i) {
        cout << endl;
        cout << "Aluno " << i + 1 << ":" << endl;
        imprime(alunos[i]);
    }

    return 0;
}