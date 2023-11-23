#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int idade;
    float nota;
    string nome;
}Aluno;

int main() {
    Aluno* novoAluno = new Aluno;

    novoAluno->nome = "Joao";
    novoAluno->idade = 20;
    novoAluno->nota = 8.5;

    cout << "Nome: " << novoAluno->nome << endl;
    cout << "Idade: " << novoAluno->idade << endl;
    cout << "Nota: " << novoAluno->nota << endl;

    cout << endl;

    novoAluno->nome = "Joao Silva";
    novoAluno->idade = 21;
    novoAluno->nota = 9.0;

    cout << "Nome: " << novoAluno->nome << endl;
    cout << "Idade: " << novoAluno->idade << endl;
    cout << "Nota: " << novoAluno->nota << endl;

    return 0;
}