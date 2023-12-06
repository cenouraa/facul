/*Variáveis Estáticas Crie uma função que declare uma variável estática e a
incremente em um. Chame essa função várias vezes e imprima o valor da
variável estática após cada chamada. A resposta deve ser o valor da variável
estática após cada chamada, demonstrando que seu valor é preservado
entre chamadas de função.
*/

#include <iostream>
using namespace std;

void denilson(int x){
    static int n=13;
    n += x;
    cout << n << endl;
}

int main(){
    denilson(10);
    denilson(1);

    return 0;
}