#include <iostream>
#include <string>
using namespace std;

typedef struct{
    int idade;
    float nota;
    string nome;
}Aluno;

typedef struct{
    Aluno estudante;
}Curso;

int main() {
    Curso novoCurso;

    novoCurso.estudante.nome = "Joao";
    novoCurso.estudante.idade = 20;
    novoCurso.estudante.nota = 8.5;

    cout << "Dados do Curso:" << endl;
    cout << "Nome do Estudante: " << novoCurso.estudante.nome << endl;
    cout << "Idade do Estudante: " << novoCurso.estudante.idade << endl;
    cout << "Nota do Estudante: " << novoCurso.estudante.nota << endl;

    return 0;
}