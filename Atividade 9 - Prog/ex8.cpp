/*Variáveis de Registro Crie uma função que declare uma variável de registro e
a incremente em um. Chame essa função várias vezes e imprima o valor da
variável de registro após cada chamada. A resposta deve ser o valor da
variável de registro após cada chamada, demonstrando que seu valor é
preservado entre chamadas de função. Note que, embora a palavra-chave
register sugira que a variável seja armazenada em um registrador, isso é
apenas uma dica para o compilador e o comportamento real pode depender
da implementação.*/

#include <iostream>
using namespace std;

void incremento(int cnt){
    cnt++;
    cnt++;
    cnt++;
    cout << cnt << endl;
}

int main(){
    int register cnt;
    incremento(cnt);
    incremento(cnt);
    incremento(cnt);

    return 0;
}