/*Um valor double deve ser decomposto em uma parte inteira e uma parte
fracionária. (Para obter somente a parte inteira do número use o modificador int.
Por exemplo, se na função foi usada uma variável ponteiro denominada
int_part e uma variável float x para receber o número, use a seguinte
expressão para obter a parte inteira: int_part = (int) x;.)*/

#include <iostream>
using namespace std;

void decomporNumero(float num, int *inteiro, float *frac);

int main(){
    int inteiro=0;
    float num=0, frac=0;

    cin >> num;

    decomporNumero(num, &inteiro, &frac);

    cout << inteiro << " " << frac;

    return 0;
}

void decomporNumero(float num, int *inteiro, float *frac){
    *inteiro = (int) num;
    *frac = num - *inteiro;
}