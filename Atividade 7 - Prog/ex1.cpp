#include <iostream>
using namespace std;

typedef struct{
    int idade;
    float nota;
    string nome;
}Aluno;

int main(){
    Aluno novoAluno;
    novoAluno.idade = 17;
    novoAluno.nota = 7.6;
    novoAluno.nome = "Joberson";

    cout << novoAluno.idade << " " << novoAluno.nota << " " << novoAluno.nome << endl;

    return 0;
}