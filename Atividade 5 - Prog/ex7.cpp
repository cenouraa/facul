#include <iostream>
#include <vector>

using namespace std;

void inverterVetor(vector<int> &vetor);

int main() {
    vector<int> meuVetor = {1, 2, 3, 4, 5};

    inverterVetor(meuVetor);

    for (int num : meuVetor) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

void inverterVetor(vector<int> &vetor){
    int tamanho = vetor.size();
    for (int i = 0; i < tamanho / 2; i++) {

        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}