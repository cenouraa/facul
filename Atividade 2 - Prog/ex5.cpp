#include <iostream>
#include <cmath>

using namespace std;

void primoRico(double montante, double taxa, double tempo);

int main(){
    double montante=0, taxa=0, tempo=0;

    cin >> montante >> taxa >> tempo;

    primoRico(montante, taxa, tempo);

    return 0;
}

void primoRico(double montante, double taxa, double tempo){
    double total=0;

    taxa = (taxa/100)+1;

    total = montante * pow(taxa, tempo);

    cout << total;
}