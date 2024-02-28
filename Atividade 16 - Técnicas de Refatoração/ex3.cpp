#include <iostream>
using namespace std;

int main(){
    double preco_inicial = 100.0;
    double percentual_desconto = 0.1;
    double percentual_taxa_adicional = 0.05;

    double preco_com_desconto = preco_inicial * (1 - percentual_desconto);
    double preco_final = preco_com_desconto * (1 + percentual_taxa_adicional);

    cout << preco_final << endl;

    return 0;
}