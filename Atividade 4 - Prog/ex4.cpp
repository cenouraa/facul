#include <iostream>
using namespace std;

void contadorVogais(string palavra, int *vogais);

int main(){
    string palavra;
    int p;

    getline(cin, palavra);

    contadorVogais(palavra, &p);

    cout << p;

    return 0;
}

 void contadorVogais(string palavra, int *vogais){
    for(int i=0; i < palavra.length(); i++){
        switch(palavra[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                *vogais += 1;
        }
    }
 }