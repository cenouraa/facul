#include <iostream>
using namespace std;

#define N 5

int maiorElemento(int vetor[N]);
float mediaElementos(int v[], int n);
int elementosPositivos(int v[N]);
void mostrarVetor(int *v, int n);
void maiorMenor(int *v, int n, int *maior, int *menor);

int main(){
    int v[N]={0}, h[N]={0}, p[N]={0};
    int maior = INT_MIN, menor = INT_MAX;

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    cout << maiorElemento(v) << endl;
    cout << mediaElementos(v, N) << endl;
    cout << elementosPositivos(v);

    cout << endl;

    mostrarVetor(h, N);

    for(int i=0; i<N; i++){
        cout << h[i] << " ";
    }

    cout << endl;

    maiorMenor(p, N, &maior, &menor);

    cout << maior << " " << menor << endl;

    return 0;
}

void maiorMenor(int *v, int n, int *maior, int *menor){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        if(v[i] > *maior){
            *maior = v[i];
        }
        if(v[i] < *menor){
            *menor = v[i];
        }
    }
}

void mostrarVetor(int *v, int n){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

}

int elementosPositivos(int v[N]){
    int positivos=0;

    for(int i=0; i<N; i++){
        if(v[i] >= 0){
            positivos++;
        }
    }

    return positivos;
}

float mediaElementos(int v[], int n){
    int soma=0;
    float media=0;

    for(int i=0; i<n; i++){
        soma += v[i];
    }

    media = (soma*1.0)/n;

    return media;
}

int maiorElemento(int vetor[N]){
    int menor = INT_MIN, maior=0;

    for(int i=0; i<N; i++){
        if(vetor[i] > menor){
            maior = menor = vetor[i];
        }
    }

    return maior;
}