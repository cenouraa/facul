/*Comparação de ponteiros Crie um programa que declare dois ponteiros para
inteiros e, em seguida, compare-os.
*/

#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL, *ptr2 = NULL, p=6, n=6;

    ptr = &n;
    ptr2 = &p;

    if((*ptr) == (*ptr2)){
        cout << "Os valores sao iguais!" << endl;
    }
    else{
        cout << "Sao diferentes!" << endl;
    }

    return 0;
}